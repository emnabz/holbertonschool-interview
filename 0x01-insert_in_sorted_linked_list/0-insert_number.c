#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - insert a node in a sorted list
 * @head: pointer to head of list
 * @number: the number to insert of the list
 * Return: number of nodes
 */

listint_t *insert_node(listint_t **head, int number)
{
listint_t *pre, *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = number;
pre = *head;
if (pre->n > new->n)
{
new->next = pre;
*head = new;
return (*head);
}
while (pre->next != NULL)
{
if (pre->next->n > new->n)
{
new->next = pre->next;
pre->next = new;
return (new);
}
pre = pre->next;
}
pre->next = new;
new->next = NULL;
return (new);
}
