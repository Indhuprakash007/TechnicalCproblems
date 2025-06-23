#include <stdio.h>

int main() {
    int a;
   printf("enter  number a:");
   scanf("%d", &a);
   
    int b;
   printf("enter  number b:");
   scanf("%d", &b);
   
    int c;
   printf("enter  number c:");
   scanf("%d", &c);
   
    int d;
   printf("enter  number d:");
   scanf("%d", &d);
   if  ((a >b) && (a > c) && (a > d))
   {
      printf("a is high");
   }
   else if ((b > c) && (b > d))
   {
       printf("b is high");
   }
   
   else if (c > d)
   {
       printf("c is high");
   }
     else
   {
       printf("d is high");
   }
}