//Orphan and Zombie process 
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(
    {

pid_t q; //q is the pid of the child process
q = fork();
//Zombie process
if (q == 0)
{
    printf("i am child having PID: %d\n", getpid());
    


