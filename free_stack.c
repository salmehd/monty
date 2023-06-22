#include "monty.h"
/**
* free_stack - function tha frees a doubly linked list
* @head: head of the stack
*/

void free_stack(stack_t *head)
{
	stack_t *ext;

	ext = head;
	while (head)
	{
		ext = head->next;
		free(head);
		head = ext;
	}
}
