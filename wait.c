// uses of wait systemcall
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
 main()
 {

     printf("Hello World!\n");
        // show pid
        printf("PID: %d\n", getpid());
        // fork() system call
        // creates a new process
        fork();
        printf("Hello World!\n");
        wait(NULL);
        printf("Hello world 2!\n");
        exit(0);
        printf("Hello world 3!\n");
        // show pid
        printf("PID: %d\n", getpid());
        
 }