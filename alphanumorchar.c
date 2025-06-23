#include <stdio.h>

int main() {
    char a;
    printf("enter a character (alphabet or number or spl character):");
    scanf("%c",&a);
    if ((a>='A'&& a<='Z') || (a>='a' && a<='z')) {
        printf("alphabet");
    }
   else if (a >= '0' && a <= '9') 
    {
        printf(" number");
    }
    else
    {
        printf("spl chracter");
    }
}