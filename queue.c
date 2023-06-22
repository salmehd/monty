#include "monty.h"
/**
 * f_queue - function to prints the top
 * @head: stack head
 * @counter: number counter
 * Return: nothing
*/

void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - function to add node to the tail stack
 * @n: new value
 * @head: head of stack
 * Return: nothing
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *ext;

	ext = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (ext)
	{
		while (ext->next)
			ext= ext->next;
	}
	if (!ext)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		ext->next = new_node;
		new_node->prev = ext;
	}
}
