#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point of the program
 * @argv: Array of command line argument strings
 *
 * Description: This program prints all the command line arguments.
 *
 * Return: Always 0 (Success)
 */
int main(char **argv)
{
    int i = 0;

    while (argv[i] != NULL)
    {
        printf("Argument %d: %s\n", i, argv[i]);
        i++;
    }

    return (0);
}
