#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * free_list - a function that frees memory of a list
 * @head: pointer to head of singly linked list
 *
 * Return: no return
 */
void free_list(list_t *head)
{
	if (head == 0)
	return;
	free_list(head->next);
	free(head->str);
	free(head);
}
