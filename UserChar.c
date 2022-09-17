#include <stdio.h>

int main(){

    /*Variable declaraton*/
    char TestChar;

    /*Asking value and storing it in 'TestChar'*/
    printf("Enter an alphabet :");
    scanf("%c", &TestChar);
    
    printf("\n");//This is used to get another line

    /*Printing the value entered by the user*/
    printf("Entered alphabet is : %c", TestChar);

    return 0;
}
