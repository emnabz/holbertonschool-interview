#include "list.h"
#include <string.h>
/**
 * add_node_end - added node at the end of doubly cerculaire linkedlist
 *
 * @list: A pointer to the head of the linkd list
 * @str: data of the node
 *
 * Return: new_node or NULL
 */
List *add_node_end(List **list, char *str)
{
	List *temp;
	List *new_node = malloc(sizeof(List));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->next = NULL;
	temp = *list;
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	if (temp == NULL)
	{
		*list = new_node;
		new_node->next = *list;
		new_node->prev = *list;
		return (*list);
	}
	else
	{
		while (temp->next != *list)
			temp = temp->next;
		temp->next = new_node;
		new_node->next = *list;
		new_node->prev = temp;
		(*list)->prev = new_node;
		return (new_node);
	}
	return (NULL);
}
/**
 * add_node_begin - added node at the start of doubly cerculaire linkedlist
 *
 * @list: A pointer to the head of the linkd list
 * @str: data of the node
 *
 * Return: new_node or NULL
 */
List *add_node_begin(List **list, char *str)
{
	List *new_node = malloc(sizeof(List));
	List *temp;

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	if (*list == NULL)
	{
		*list = new_node;
		new_node->next = *list;
		new_node->prev = *list;
		return (*list);
	}
	else
	{
		temp = *list;
		while (temp->next != *list)
			temp = temp->next;
		temp->next = new_node;
		new_node->prev = temp;
		new_node->next = *list;
		(*list)->prev = new_node;
		(*list) = new_node;
		return (new_node);
	}
	return (NULL);
}
