#include <stdio.h>

int main(){
    /*Variable Declaration*/
    int even, start, end;
    
    /*Asking first value*/
    printf("Enter the first value :");
    scanf("%d", start);

    printf("\n");

    /*Asking last value*/
    printf("Enter the last value :");
    scanf("%d", end);

    /*Applyiny loop and printing even numbers between enterd value*/
    for (even = start; even <= end; even++){
        if(even%2 == 0)
        printf("%2d\n", even);
    }
    return 0;
}
