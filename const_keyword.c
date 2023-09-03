#include<stdio.h>
#include<stdint.h>

int constant1()
{
    //example of const keyword it is  Immutable

    const int a = 10;
    const char b = 'A';
    const float c = 11.2;

    printf("constant int value %d\n", a);
    printf("constant char value %c\n", b);
    printf("constant float value %f\n", c);
    // int a = 20;  = error because the a is alreday define as 10 and its const 
    //volatile int a = 20;
}
void main()
{

    constant1();
}