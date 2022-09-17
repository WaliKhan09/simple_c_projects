#include <stdio.h>

int main(){

    /*Variable Daclaration*/
   int year;

   /*Asking the value*/
   printf("Enter a year :");
   scanf("%d", &year);

   /*Applying conditions and printing the statement*/
   if (year % 4 == 0){
      printf("%d is a leap year", year);
   }
   else{
      printf("%d is not a leap year", year);
   } 
    return 0;
}
