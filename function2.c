// with argument and with return value
#include<stdio.h>

int sum1(int a , int b)
{
     return a+b;
}
int main()
{
    int a,c,b;
    a= 10;
    b = 20;
    c = sum1(a,b);
    printf("the sum is: %d",c);
}