#include <stdio.h>
#include <unistd.h>
#include "shellmans.h"
/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	char *str;
	char **arr_toks;
	size_t x = 0;

	while (1)
	{
    	printf("$shellmans ");
	getline(&str, &x, stdin);
	arr_toks = tokenizar(str);
	/**printf("%s", pache);*/
	}
	return (0);
}
