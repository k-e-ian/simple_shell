#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct
 * @data: directory
 * @node: pointer to next node
 */

typedef struct node {
	char *data;
	struct node *next;
} path_dir;

/**
 * main - linked lists for path directories
 * Return: 0
 */
int main(void)
{
	char *path = getenv("PATH");
	char *dir;
	path_dir *head = NULL;

	head = malloc(sizeof(path_dir));

	dir = strtok(path, ":");

	while (dir)
	{
		head->data = dir;
		head->next = NULL;
		dir = strtok(NULL, ":");
		head = malloc(sizeof(path_dir));
	}
	printf("data:%s", head->data);

	return (0);
}
