#include <stdio.h>

int main() 
{
    char ch;
    printf("enter a chract: ");
    scanf("%c",&ch);
    if ( ch>= 'a' && ch<= 'z') {
    ch =(ch =='z') ? 'a' : ch+1;
    }
    else if (ch>='A' && ch<='Z') {
        ch = (ch == 'Z') ? 'A' : ch+1;
   
    }
    else
    {
        printf("not valid");
    }
    
     printf("answer :%c",ch);
    return 0;
}