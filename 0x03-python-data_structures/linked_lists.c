#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - Prints every element of listint_t list
 * @h: Points head of list
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
const listint_t *current;
unsigned int n; /* number of nodes */

current = h;
n = 0;
while (current != NULL)
{
printf("%i\n", current->n);
current = current->next;
n++;
}

return (n);
}

/**
 * add_nodeint_end - ADD new node at end of listint_t list
 * @head: PointS first node of listint_t list.
 * @n: integer to include in new node
 * Return: address FOR new element or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *current;

current = *head;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
*head = new;
else
{
while (current->next != NULL)
current = current->next;
current->next = new;
}
return (new);
}

/**
 * free_listint - frees listint_t list
 * @head: PointS list to be freed.
 * Return: void
 */
void free_listint(listint_t *head)
{
listint_t *current;

while (head != NULL)
{
current = head;
head = head->next;
free(current);
}
}
