#include<stdio.h>

int main(){

    /*Variable declaration*/
    int odd, start, end;

    /*Asking first value*/
    printf("Enter first value :");
    scanf("%d", &start);

    printf("\n");

    /*Asking last value*/
    printf("Enter last value :");
    scanf("%d", &end);

    /*Applying loop and printing odd numbers between enterd value*/
    for (odd = start; odd <= end; odd++){
        if (odd%2 != 0)
        printf("%d\n", odd);
    }
    return 0;
}
