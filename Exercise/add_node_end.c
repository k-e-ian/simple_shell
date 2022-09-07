#include <stdlib.h>
#include <string.h>

typedef struct node {
	char *data;
        struct node *next;
} path_dir;

/**
 * add_node_end - a function that adds a new node at the end of a path_dir list
 * @head: A pointer the head of the list_t list
 * @str: the string to be added to the list_t list.
 * Return: the address of the new element, or NULL on failure
 */
path_dir *addnode(path_dir **head, const char *str)
{
	char *dup;
	int index;
	path_dir *temp;
	path_dir *new_node_end = malloc(sizeof(path_dir));

	if (new_node_end == NULL)
		return (NULL);

	dup = strdup(str);

	if (str == NULL)
	{
		free(new_node_end);
	}

	for (index = 0; str[index]; )
		index++;

	new_node_end->str = dup;
	new_node_end->next = NULL;

	if (*head == NULL)
		*head = new_node_end;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node_end;
	}
	return (*head);
}
