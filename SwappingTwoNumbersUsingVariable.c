#include <stdio.h>

int main(){

   /*Variable Declaration*/
   int a, b, swap;

   /*Asking the first value*/
   printf("Enter the first number :");
   scanf("%d", &a);

   printf("\n");

   /*Asking the second value*/
   printf("Enter the second number :");
   scanf("%d", &b);

   printf("\n");

   /*Printing statement before swapping the numbers*/
   printf("Values before swapping : \n a = %d, b = %d \n\n", a, b);

   swap = a;
   a = b;
   b = swap;

   /*Printing statement after swapping the numbers*/
   printf("Values after swapping : \n a = %d, b = %d \n", a, b);

   return 0;
}
