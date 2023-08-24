#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point of the program
 * Description: This program prints the PID of the parent process.
 *
 * Return: Always 0 (Success)
 */

int main() {
    pid_t parent_pid = getppid();
    printf("Parent PID: %d\n", parent_pid);
    return 0;
}
