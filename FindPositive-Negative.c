#include <stdio.h>

int main(){

    /*Varibale Declaration*/
   int num;

   /*Asking the value*/
   printf("Enter an integer :");
   scanf("%d", &num);

   printf("\n");

   /*Applying conditins and printing the statement*/
   if (num >= 0){
      printf("%d is positive\n", num);
   }
   else if (num < 0){
      printf("%d is negative\n", num);
   }
   return 0;
}
