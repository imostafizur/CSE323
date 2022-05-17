// uses of exit systemcall
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){

    fork();
    printf("Hello World!\n");
    exit(0); //exit with status 0 (success)
    printf("Hello world 2!\n");
    exit(1); //exit with status 1 (failure)
    printf("Hello world 3!\n");
    exit(2); //exit with status 2 (failure)
    printf("Hello world 4!\n");
    exit(3); //exit with status 3 (failure)
    printf("Hello world 5!\n");
    
    
}