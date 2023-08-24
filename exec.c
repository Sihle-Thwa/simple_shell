#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: This program demonstrates the use of execve system call
 *              to execute another program while retaining the current environment.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char *args[] = {"ls", "-l", NULL};  // Command and its arguments
    char *env[] = {"PATH=/bin:/usr/bin", NULL};  // New environment
    
    // Using execve to execute the "ls -l" command
    if (execve("/bin/ls", args, env) == -1)
    {
        perror("execve");
        exit(EXIT_FAILURE);
    }

    // This part will not be reached due to the execve call

    return 0;
}
