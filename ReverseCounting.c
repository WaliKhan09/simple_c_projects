#include<stdio.h>

int main(){

    /*Variable declaration*/
    int a, start, end;

    /*Asking the first value*/
    printf("Enter the first number :");
    scanf("%d", &start);

    printf("\n");

    /*Asking the last value*/
    printf("Enter the last number :");
    scanf("%d", &end);

    /*Applyint the condition and printing the numbers in reverse order*/
    for (a = end; a >= start; a--)
    {
        printf("%d \n", a);
    }
    return 0;
}
