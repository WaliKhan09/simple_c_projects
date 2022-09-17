#include <stdio.h>

int main(){

   /*Variable declaration*/
   int num;

   /*Asking the value*/
   printf("Enter a number :");
   scanf("%d", &num);

   printf("\n");

   /*Applying conditins for even or odd number and printing the statement*/
   if(num % 2 == 0){
      printf("%d is even\n", num);
   }
   else if(num % 2 != 2 ){
      printf("%d is odd\n", num);
   } 
   return 0;
}
