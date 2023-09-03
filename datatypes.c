#include<stdio.h>

int test() // 
{
    printf("hello im in test function \n");
    // integer
    int a = 10;
    printf("int no. is %d\n",a);

    //float
     float f = 1.00;
     printf("flot is %f\n",f);

    //char

    char b = 'A';
    printf("char is %c\n",b);


    // string
    char str[] = "hello im shraddha";
    printf("char string is %c", str);

    return 0;
}

int main() // main function
{
    test();
    return 0; //exit status
}