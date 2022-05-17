//read system call
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(){

    char buffer[100];

    read(0,buffer,10); //0 is stdin, 10 is the number of bytes to read
    write(1,buffer,10); //1 is stdout, 10 is the number of bytes to write

}