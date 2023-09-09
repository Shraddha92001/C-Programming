#include<stdio.h>
int main()
{
    printf("----- example of pointer ----\n");
    int a = 10;
    int* ptr = &a; // it store the address of a
    printf("the values of a is --  %d\n", a);
    printf("the values of a using pointer is --  %d\n", *ptr);
    printf("the address of a is -- %x\n",ptr); // %x is return the hexadecimal number
    printf("the address of pointer ptr is -- %p \n",&ptr);// %p return address of pointer..
    return 0;
}