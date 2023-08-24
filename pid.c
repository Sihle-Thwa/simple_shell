#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point of the program
 * @ac: The number of command line arguments
 * @av: Array of command line argument strings
 *
 * Description: This program prints the PID of the parent process.
 *
 * Return: Always 0 (Success)
 */
int main(int ac, char **av)
{
    pid_t parent_pid = getppid();
    printf("Parent PID: %d\n", parent_pid);

    (void)ac; // Suppress unused parameter warning
    (void)av; // Suppress unused parameter warning

    return (0);
}
