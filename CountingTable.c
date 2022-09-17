#include <stdio.h>

int main(){

   /*Variable Declaration*/
   int i, j, k, l;

   /*Asking the first value*/
   printf("Enter the first number :");
   scanf("%d", &k);

   printf("\n");

   /*Asking the second value*/
   printf("Enter the first number :");
   scanf("%d", &l);

   /*Applying the conditions and printing*/
   for(i = k; i <= 10; i++){
      for(j = i; j <= l; j += 10 )
         printf(" %3d", j);
      printf("\n");
   }
   return 0;
}
