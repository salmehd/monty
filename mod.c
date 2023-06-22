#include "monty.h"
/**
 * f_mod - function to computes the division of second top element of stack
 * @head: stack head
 * @counter: number line
 * Return: nothing 
*/

void f_mod(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, ext;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ext = h->next->n % h->n;
	h->next->n = ext;
	*head = h->next;
	free(h);
}
