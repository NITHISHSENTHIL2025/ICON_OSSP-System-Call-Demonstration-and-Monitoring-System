#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include "icon_ossp.h"

void process_demo()
{
    pid_t pid;

    printf("\nCreating child process using fork\n");

    pid = fork();

    if (pid < 0)
    {
        perror("fork");
        return;
    }

    if (pid == 0)
    {
        printf("Child process running\n");
        printf("Child PID: %d\n", getpid());
        printf("Parent PID: %d\n", getppid());
        exit(0);
    }
    else
    {
        printf("Parent process running\n");
        printf("Parent PID: %d\n", getpid());
        printf("Child PID: %d\n", pid);

        wait(NULL);

        printf("Child process completed\n");
    }
}

void exec_demo()
{
    pid_t pid;
    int status;

    printf("\nCreating child for exec demo\n");

    pid = fork();

    if (pid < 0)
    {
        perror("fork");
        return;
    }

    if (pid == 0)
    {
        printf("Child will execute ls command\n");

        execlp("ls", "ls", "-l", NULL);

        perror("exec");
        exit(1);
    }
    else
    {
        waitpid(pid, &status, 0);

        printf("Exec child completed\n");
    }
}

void wait_demo()
{
    pid_t pid;
    int status;

    printf("\nParent child synchronization demo\n");

    pid = fork();

    if (pid < 0)
    {
        perror("fork");
        return;
    }

    if (pid == 0)
    {
        printf("Child process started\n");

        sleep(2);

        printf("Child process finished\n");

        exit(5);
    }
    else
    {
        printf("Parent waiting for child\n");

        waitpid(pid, &status, 0);

        if (WIFEXITED(status))
        {
            printf("Child exit status: %d\n", WEXITSTATUS(status));
        }

        printf("Parent continues after child\n");
    }
}
