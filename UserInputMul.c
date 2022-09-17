#include<stdio.h>

int main(){

    /*Variable declaraton*/
    int num1, num2, mul;

    /*Asking the first value and holding it in 'num1'*/
    printf("Enter the first number :");
    scanf("%d", &num1);

    printf("\n");

    /*Asking the second value and holding it in 'num2'*/
    printf("Enter the second number :");
    scanf("%d", &num2);

    printf("\n");

    /*Multiplying the values and putting the answer in 'mul'*/
    mul = num1 * num2;

    /*Printing the answer*/
    printf("The multiplication of %d and %d is : %d", num1, num2, mul);

    return 0;
}
