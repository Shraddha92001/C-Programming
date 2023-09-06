// without argument and without return value
#include<stdio.h>

void sum()
{
    int a=10,b=20;
    int c = a+b;
    printf("%d", c);
}
int main()
{
    sum("%d\n");
}