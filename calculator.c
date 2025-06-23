#include <stdio.h>

int main() {
    int a=10,b=9;
    char ch;
    printf("enter the operator:");
    scanf("%c",&ch);
    switch(ch){
        case '+': printf("%d",a+b); break;
        case '-': printf("%d",a-b); break;
        case '*': printf("%d",a*b); break;
        case '/': printf("%d",a/b); break;
        default: printf("Invalid");
    }
   
    
}