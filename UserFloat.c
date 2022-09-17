#include <stdio.h>

int main(){

    /*Variable declaraton*/
    float TestFloat;

    /*Asking value and storing it in 'TestFloat'*/
    printf("Enter a number with decimal :");
    scanf("%f", &TestFloat);
    
    printf("\n");//This is used to get another line

    /*Printing the value entered by the user*/
    printf("Entered number is : %f", TestFloat);

    return 0;
}
