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

/**
 * main - Entry point of the program
 *
 * Description: This program displays a prompt, waits for the user to
 *              enter a command, and then prints the entered command.
 *              It uses the getline function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    while (1)
    {
        printf("$ ");

        // Read user input
        read = getline(&line, &len, stdin);

        if (read == -1)
        {
            if (feof(stdin))
            {
                printf("\n"); // Print a newline if Ctrl+D (EOF) is encountered
                break;
            }
            else
            {
                perror("getline");
                exit(EXIT_FAILURE);
            }
        }

        // Print the entered command
        printf("You entered: %s", line);
    }

    free(line);
    return (0);
}
