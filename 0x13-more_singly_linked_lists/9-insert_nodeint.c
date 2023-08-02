#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node.
 * @head: Pointer to the pointer to the head of the list.
 * @idx: The index of the list. Index starts at 0.
 * @n: The data to be inserted in the new node.
 * Return: NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;

listint_t *current = *head;

listint_t *new_node;

if (idx == 0)
{
new_node = malloc(sizeof(listint_t));

if (new_node == NULL)

return (NULL);

new_node->n = n;

new_node->next = *head;

*head = new_node;

return (new_node);
}

while (current != NULL && i < idx - 1)
{
current = current->next;
i++;
}

if (current == NULL || i != idx - 1)
return (NULL);
new_node = malloc(sizeof(listint_t));

if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = current->next;
current->next = new_node;
return (new_node);
}
