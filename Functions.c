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

	/**ar = malloc(10 * sizeof(char*));
	  if (ar == NULL)
	  return (NULL);**/
	for (i = 0; i < cantToks; i++)
	{
		ar[i] = malloc(strlen(token) +1);
		if (ar[i] == NULL)
		{
			for(; i >= 0; i--)
				free(ar[0]);
			free(ar);
			return (NULL);
		}
	}
	a = strdup(str);
	tok = strtok(a, delim);
	while (tok != NULL)
	{
		tok = strtok(NULL, delim);
		cantToks++;
	}
	ar = malloc(cantToks * sizeof(char*));
	t = strdup(str);
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
	printf("pacheee\n");
	return (ar);
}			
