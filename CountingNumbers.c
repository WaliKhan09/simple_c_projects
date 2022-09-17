#include <stdio.h>

int main(){

    /*Variable declaration*/
   int i, start, end;

   /*Asking the first value*/
   printf("Enter the first number :");
   scanf("%d", &start);

   printf("\n");

   /*Asking the second value*/
   printf("Enter the last number :");
   scanf("%d", &end);

   /*Applying the condition and printing the numbers*/
   for(i = start; i <= end; i++){ 
      printf("%2d\n", i);
   }
   return 0;
}
