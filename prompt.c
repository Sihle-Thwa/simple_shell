#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT_LENGTH 100

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
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    char input[MAX_INPUT_LENGTH];

    while (1)
    {
        printf("$ ");  // Display the prompt

        if (fgets(input, sizeof(input), stdin) == NULL)
        {
            if (feof(stdin))  // Handle Ctrl+D (EOF)
            {
                printf("\n");
                break;
            }
        }

        input[strcspn(input, "\n")] = '\0';  // Remove newline character

        if (strlen(input) == 0)
            continue;  // Empty input, prompt again

        printf("You entered: %s\n", input);
    }

    return (0);
}
