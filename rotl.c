#include "monty.h"
/**
  *f_rotl- function to rotates the stack to the top
  *@head: stack head
  *@counter: number count
  *Return: nothing
 */

void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *ext;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	ext = (*head)->next;
	ext->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = ext;
}
