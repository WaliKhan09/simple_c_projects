#include <stdio.h>

int main(){

    /*Variable declaration*/
    int i, j, count,start, end;

   /*Asking the first value*/
   printf("Enter the first number :");
   scanf("%d", &start);

   printf("\n");
   
   /*Asking the second value*/
   printf("Enter the first number :");
   scanf("%d", &end);

   /*Applying the conditions and printing the table*/
   for(i = start; i <= end; i++) {
      count = i;
      
      for(j = 1; j <= 10; j++) {
         printf(" %3d", count*j);
      }
      printf("\n");
   }
   return 0;
}
