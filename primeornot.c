#include <stdio.h>
#include <stdbool.h>
int main() {
    int a;
    printf("enter a number");
    scanf("%d",&a);
    for(int i=2;a<10;a++)
    if(a%i == 0) {
        printf("%d",a);
        printf("composite");
        break;
        }
    else {
        printf("prime");
        break;
    }
   
        
}