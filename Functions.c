#include "shellmans.h"
/**
 * tokenizar - 2d array
 * 
 * 
 *
 * Return: Nothing.
 */
char **tokenizar(char *str)
{
	char *token, *t;
	char **ar;
	char delim = ' ';
	int cantTokens = 0;
	int i;

	ar = malloc(cantTokens * sizeof(char*));
	if (ar == NULL)
	return (NULL);
	for (i = 0; i < cantTokens; i++)
	{
		ar[i] = malloc(strlen(token) +1);
		if (ar[i] == NULL)
		{
			for(; i >= 0; i--)
				free(ar[0]);
				free(ar);
				return (NULL);
		}
	strcpy(t, str);
	token = strtok(t, delim);
	ar[0] = strdup(token);
	while (token != NULL)
	{
		token = strtok(NULL, delim);
		ar[1] = strdup(token);
	}
	}
	return (ar);
}
				
