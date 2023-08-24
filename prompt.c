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

/**
 * split_string - Splits a string into an array of words
 * @input: The input string to be split
 * @delimiter: The delimiter used to split the string
 * @words: Array to store the split words
 *
 * Description: This function takes an input string and a delimiter
 *              and returns an array of words from the input string.
 *
 * Return: The number of words in the array
 */
int split_string(char *input, const char *delimiter, char *words[])
{
    int count = 0;
    char *token;

    token = strtok(input, delimiter);
    while (token != NULL && count < MAX_WORDS)
    {
        words[count] = token;
        count++;
        token = strtok(NULL, delimiter);
    }

    return count;
}

int main(void)
{
    char input[] = "Hello, how are you today?";
    const char delimiter[] = " ";
    char *words[MAX_WORDS];
    
    int word_count = split_string(input, delimiter, words);

    printf("Number of words: %d\n", word_count);
    for (int i = 0; i < word_count; i++)
    {
        printf("Word %d: %s\n", i, words[i]);
    }

    return 0;
}
