// Write the skeleton of code where two processes share 6 variables located and all address can be accessed by both processes.
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>

int main(){
    int *a,*b,*c,*d,*e,*f;
    int shmid;
    key_t key;
    key = 5678;
    shmid = shmget(key,sizeof(int),0666);
    a = shmat(shmid,NULL,0);
    b = shmat(shmid,NULL,0);
    c = shmat(shmid,NULL,0);
    d = shmat(shmid,NULL,0);
    e = shmat(shmid,NULL,0);
    f = shmat(shmid,NULL,0);
    *a = 1;
    *b = 2;
    *c = 3;
    *d = 4;
    *e = 5;
    *f = 6;
    printf("a = %d\n",*a);
    printf("b = %d\n",*b);
    printf("c = %d\n",*c);
    printf("d = %d\n",*d);
    printf("e = %d\n",*e);
    printf("f = %d\n",*f);
    return 0;
}