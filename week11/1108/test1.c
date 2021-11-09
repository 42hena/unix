#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int status;
    pid_t pid;

    switch (pid = fork())
    {
        case -1:
            perror("fork");
            break;
        case 0:
            printf("--> Child Process\n");
            exit(2);
            break;
        default:
            while (wait(&status) != pid) continue;
            printf("--> Parent process = My PID: %d\n", (int)getpid());
            printf("Child process Exit Status: %d\n", status >> 8);
            break;
    }
}