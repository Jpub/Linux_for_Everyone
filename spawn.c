#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int
main(int argc, char *argv[])
{
    pid_t pid;

    if (argc != 3) {
        fprintf(stderr, "Usage: %s <command> <arg>\n", argv[0]);
        exit(1);
    }
    pid = fork();
    if (pid < 0) {
        fprintf(stderr, "fork(2) failed\n");
        exit(1);
    }
    if (pid == 0) { /* 자식 프로세스 */
        execl(argv[1], argv[1], argv[2], NULL);
        /* execl()는 성공하면 반환되지 않으므로, 함수가 반환된 경우는 전부 실패 */
        perror(argv[1]);
        exit(99);
    }
    else {          /* 부모 프로세스 */
        int status;

        waitpid(pid, &status, 0);
        printf("child (PID=%d) finished; ", pid);
        if (WIFEXITED(status))
            printf("exit, status=%d\n", WEXITSTATUS(status));
        else if (WIFSIGNALED(status))
            printf("signal, sig=%d\n", WTERMSIG(status));
        else
            printf("abnormal exit\n");
        exit(0);
    }
}
