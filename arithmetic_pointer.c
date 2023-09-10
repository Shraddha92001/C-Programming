//arithmetic of pointer 
// ++, -- ,+ ,-
#include<stdio.h>

int main()
{
    int a= 30;
    int* ptr = &a;
    ptr ++; // is use to add the size of datatype in pointer
    //ptr --; // is use to remove the size of datatype in pointer
    printf("%d\n",ptr );// value of data type(int)  in the pointer 
    printf("%d\n",ptr + 1);// add the size of data type in the pointer by oce time , for int (+ 4 byte)
    printf("%d\n",ptr - 1);// remove the size of data type in the pointer  by oce time, for int (- 4 byte)
}