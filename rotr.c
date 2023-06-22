#include "monty.h"
/**
  *f_rotr- function to rotates the stack to the bottom
  *@head: stack head
  *@counter: number count
  *Return: nothing
 */

void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *echo;

	echo = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (echo->next)
	{
		echo = echo->next;
	}
	echo->next = *head;
	echo->prev->next = NULL;
	echo->prev = NULL;
	(*head)->prev = echo;
	(*head) = echo;
}
