#include <stdio.h>
#include <unistd.h>
/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	char *pache;
	size_t x = 0;

	while (1)
	{
    	printf("$ ");
	getline(&pache, &x, stdin);
	printf("%s", pache);
	}
	return (0);
}
