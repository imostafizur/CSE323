//Uses of open
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>

int main(){

    // file descriptor
    // 0 is stdin
    // 1 is stdout
    // 2 is stderr
    

    // open() system call
     int n, fd;
        char buffer[100];
        fd = open("Home/test.txt", O_RDONLY);
        open("Home/test.txt", O_RDONLY|O_CREAT);
        n = read(fd, buffer, 100);
        write(1, buffer, n);
        




}