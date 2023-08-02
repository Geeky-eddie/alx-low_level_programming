#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list, even if it has a loop
 * @head: Pointer to the head of the linked list
 *
 * Return: If the function fails, the program with status 98
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		if (head <= head->next)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}
		head = head->next;
	}
	return (count);
}
