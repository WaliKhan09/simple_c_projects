#include <stdio.h>

int main(){
    
    /*Variable declaration*/
   int a, b;

   /*Asking first value*/
   printf("Enter the first value :");
   scanf("%d", &a);

   printf("\n");

   /*Asking second value*/
   printf("Enter the second value :");
   scanf("%d", &b);

   printf("\n");

   /*Applying conditions and printing the statement accordingly*/
   if(a > b){
       printf("%d is greater than %d", a, b);
   }
   else if (a < b){
       printf("%d is greater then %d", b, a);
   }
   else
   {
       printf("Both are equal");
   }
   return 0;
}
