#include <stdio.h>
#include <unistd.h>
/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{

	int i = 0;

	while (av[i] != NULL)
	{
	printf("%s", av[i]);
	i++;
	}
	
	return (0);
}
