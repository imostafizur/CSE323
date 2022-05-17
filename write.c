// read write and open system calls
// Language: c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(){

write( 1,"Hello World!\n", 13);
   

//1 is for output 13 is the number of bytes to write
//2 is for input
//3 is for error
//4 is for file descriptor
//5 is for file descriptor
//6 is for file descriptor

//----------------------
// If you want to know about the details of the system calls, goto the CLI and type: man 2 (the system call)

}