#include <stdio.h>

int main(){

    /*Variable declaraton*/
    int TestInt;

    /*Asking value and storing it in 'TestInt'*/
    printf("Enter an integer :");
    scanf("%d", &TestInt);
    
    printf("\n");//This is used to get another line

    /*Printing the value entered by the user*/
    printf("Entered number is : %d", TestInt);

    return 0;
}
