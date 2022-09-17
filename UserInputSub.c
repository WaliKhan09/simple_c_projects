#include<stdio.h>

int main(){

    /*Variable declaraton*/
    int num1, num2, sub;

    /*Asking the first value and holding it in 'num1'*/
    printf("Enter the first number :");
    scanf("%d", &num1);

    printf("\n");

    /*Asking the second value and holding it in 'num2'*/
    printf("Enter the second number :");
    scanf("%d", &num2);

    printf("\n");

    /*Subtracting values and putting the answer in 'sub'*/
    sub = num1 - num2;

    /*Printing the answer*/
    printf("The subtraction of %d and %d is : %d", num1, num2, sub);

    return 0;
}
