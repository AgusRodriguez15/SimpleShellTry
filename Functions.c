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
	char *token, *tok, *t, *a;
	char **ar;
	char *delim = " ";
	int cantToks = 0;
	int i, j = 0;

	a = strdup(str);
	if (a == NULL)
		return (NULL);

	tok = strtok(a, delim);
	while (tok != NULL)
	{
		tok = strtok(NULL, delim);
		cantToks++;
	}

	ar = malloc(cantToks * sizeof(char*) + 1);
	if (ar == NULL)
	{
		return (NULL);
	}
	t = strdup(str);
	if (t == NULL)
		return (NULL);
	token = strtok(t, delim);
	ar[0] = strdup(token);
	while (token != NULL)
	{

		token = strtok(NULL, delim);
		if (token == NULL)
			break;	
		ar[1] = strdup(token);
	}
	ar[2] = NULL;
	printf("llega?\n");
	while (ar && ar[j]) {
		printf("%s\n", ar[j]);
		j++;
	}
	free(ar);
	printf("pacheee\n");
	return (ar);
}			
