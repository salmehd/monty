#include "monty.h"
/**
 * f_mul - function to multiplies the top two elements of the stack
 * @head: stack head
 * @counter: counter
 * Return: nothing
*/

void f_mul(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	ext = h->next->n * h->n;
	h->next->n = ext;
	*head = h->next;
	free(h);
}
