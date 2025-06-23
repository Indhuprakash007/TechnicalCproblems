1. inverted right triangle
#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   for(int i=1;i<=n;i++) {
       for(int j=5;j>=i;j--) {
           printf("*");
       }       
       printf("\n");
   }
}

2. space triangle 
#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   for(int i=1;i<=n;i++) {
       for(int j=1;j<=n;j++) {
           if(i+j<=n) {
               printf(" ");
           }
           else {
               printf("*");
           }
           
       }
       printf("\n");
   }
    return 0;
}
3. x pattern star 
#include <stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++) {
      for(int j=0;j<n;j++) {
          if(i==j || i+j==n-1) {
              printf("*");
          }
          else  {
              printf(" ");
          }
      }
      printf("\n");
  }

    return 0;
}
4. x pattern num
#include <stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++) {
      for(int j=0;j<n;j++) {
          if(i==j || i+j==n-1) {
              printf("%d",i+1);
          }
          else  {
              printf(" ");
          }
      }
      printf("\n");
  }
5. butterfly pattern 
#include <stdio.h>

int main() {
    int i,j,n=5;
    for(i = 1;i<=n;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(j<= i || j>=11-i)
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
        
    }
    for(i = 1;i<=n;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(j<= 6-i || j>=5+i)
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
        
    }
    return 0;
}