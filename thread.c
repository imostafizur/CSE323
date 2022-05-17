// Ueses of thread

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

int main(){
    //Average of N Numbers 
    void thread_function(void *arg);
    pthread_t t;
    int i,n,sum=0;
    printf("Enter the number of numbers: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter the number: ");
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("The sum of the numbers is: %d\n",sum);
    printf("The average of the numbers is: %f\n",(float)sum/n);
    pthread_create(&t,thread_function,NULL);
    pthread_join(t,NULL);
    return 0;
    
}
