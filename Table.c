#include <stdio.h>

int main(){

   /*Variable Declaration*/
   int i, j, n;

   /*Askint the value*/
   printf("Enter the number whose table you want :");
   scanf("%d", &n);

   printf("\n");

   /*Assigning the value*/
   j = 1;

   /*Applying the condition and printing table*/
   for(i = n; i <= (n*10); i += n){
      printf("%3d  x %2d  =  %2d\n", n, j, i);
      j++;
   }
   return 0;
}
