#include<stdio.h>

int para()//default function
{
    int c = 10;
    int d = 40;
    return c + d;
}

int sum( int a , int b)//parameterized function
{
    return a + b;
}

void newprint( char * char1)
{
    printf("hello this is function ++ %s\n",char1);
}
int main() // main function
{
    printf("the sum od A and B is = %d\n",sum(10,20));
    printf("default function %d\n", para());
    newprint(" \n++ function reciverd %s");
    return 0;
}