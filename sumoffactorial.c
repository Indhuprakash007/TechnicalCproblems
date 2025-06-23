#include <stdio.h>

int main()
{
   int num=3,sum=0,mul=1;
  
   for(int i=1;i<=num;i++) {
      mul=1;
    for(int j=1;j<=i+1;j++){
       mul*=j;
   }
   sum+=mul;
   
}
printf("%d",sum);
}