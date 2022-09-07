#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * prototype
 */
char *_getenv(const char *var);
/**
 * _getenv - function to get environment variable
 *
 * Return: 0
 */
char *_getenv(const char *var)
{
	extern char **environ;
	int i = 0, len;

	len = strlen(var);	
	while (environ[i] != NULL)
	{
		if (strncmp(var, environ[i], len) == 0)
			return (environ[i]);
		i++;
	}
	return (NULL);
}

/**
 * main - testing own getenv function
 * Return (0);
 */

int main(void)
{
	char *name = _getenv("PWD");
	char *name1 = getenv("PWD");

	printf("%s\n%s\n", name, name1);
	return (0);
}
