//Write a C program to compute the sum of the first 10 natural numbers.
//Expected Output :
//The first 10 natural number is :
//1 2 3 4 5 6 7 8 9 10
//The Sum is : 55

#include<stdio.h>
int for1()
{   
    int sum=0;
    for ( int i = 1; i < 11; i++)
    {
        /* code */
        sum =sum+i;
        printf("%d\n",i);
        
    }
    printf("the sum is:%d",sum);
    
}
int main()
{
    for1();
    return 0;
}