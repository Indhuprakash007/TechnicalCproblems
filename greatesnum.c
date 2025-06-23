 #include <stdio.h>
   int main()
{
int a = 2, b = 3, c= 4;
a>b ? ((a>c) ? (b>c) ? printf("a is greatest ") : printf("b is greatest") : printf("c is greatest")) : printf("c is greatest");

}