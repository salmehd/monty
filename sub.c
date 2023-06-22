#include "monty.h"
/**
  *f_sub- funtion that substration
  *@head: stack head
  *@counter: number count
  *Return: nothing
 */

void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *ext;
	int sub, nodes;

	ext = *head;
	for (nodes = 0; ext != NULL; nodes++)
		ext = ext->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ext = *head;
	sub = ext->next->n - ext->n;
	ext->next->n = sub;
	*head = ext->next;
	free(ext);
}
