#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void )
{
    int fd[2];
    pid_t pid;
    char buf[257];
    int len, status;

    if (pipe(fd) == -1)
    {
        perror("pipe call");
        exit(1);
    }
    switch (pid = fork())
    {
        case -1:
            perror("fork call");
            exit(1);
            break;
        case 0:
            close(fd[1]);
            write(1, "Child Process:", 15);
            len = read(fd[0], buf, 256);
            write(1, buf, len);
            break;
        default:
            close(fd[0]);
            buf[0] = '\0';
            write(fd[1], "Test Message\n", 14);
            close(fd[1]);
            waitpid(pid, &status, 0);
            break;
    }
}