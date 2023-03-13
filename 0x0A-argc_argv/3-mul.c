#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * @atoi:  convert a string to an int
 * Return: result of multiplication or 1
 **/
int main(int argc, char *argv[])
{
	int a, b, result;

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
