#include <stdio.h>

int main(){

    /*Variable declaration*/
   int a, b, c;

   /*Asking first value*/
   printf("Enter the first value :");
   scanf("%d", &a);

   printf("\n");

   /*Asking second value*/
   printf("Enter the first value :");
   scanf("%d", &b);

   printf("\n");

   /*Asking third value*/
   printf("Enter the first value :");
   scanf("%d", &c);

   printf("\n");

   /*Applying the conditions and printing the answers*/
   if(a > b && a > c){
      printf("%d is the largest.", a);
   }
   else if(b > a && b > c){
      printf("%d is the largest.", b);
   }
   else if(c > a && c > b){
      printf("%d is the largest.", c);
   }
   else   
      printf("Values are not unique");

   return 0;
}
