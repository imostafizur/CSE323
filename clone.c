//clone() system call
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>

int main(){
    
   
  clone((void*)&main,(void*)&main,CLONE_VM,NULL);

    printf("Hello World\n");
    return 0;
}
