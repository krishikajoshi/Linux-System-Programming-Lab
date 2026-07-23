#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>

void signalHandler(int sig)
{
    printf("Child process received signal %d and is terminating.\n", sig);
    exit(0);
}

int main()
{
    pid_t pid = fork();

    if (pid == 0)
    {
        signal(SIGTERM, signalHandler);
        printf("Child Process Created. PID = %d\n", getpid());

        while (1)
        {
            sleep(1);
        }
    }
    else if (pid > 0)
    {
        printf("Parent Process. PID = %d\n", getpid());

        sleep(3);

        kill(pid, SIGTERM);

        wait(NULL);

        printf("Child process terminated successfully.\n");
    }
    else
    {
        printf("Fork failed.\n");
    }

    return 0;
}
