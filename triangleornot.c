#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter a :");
    scanf("%d",&a);
    printf("enter b :");
    scanf("%d",&b);
    printf("enter c :");
    scanf("%d",&c);
   if(a+b>c){
       printf("triangle");
   }
   else if(a == b == c){
       printf("equilateral triangle");
   }
   else{
       printf("not triangle");
   }
    
}