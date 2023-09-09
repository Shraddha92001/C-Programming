#include<stdio.h>
int main()
{
    printf("----- example of null pointer ----\n");
    
    int* ptr; // it store the address of a
    int* ptr2 = NULL;
    printf("the value of null pointer --  %p\n", ptr);
    printf("the value of null pointer --  %p\n", ptr2);
    
    return 0;
}