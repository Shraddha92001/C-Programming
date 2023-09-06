// recurcive function using factorial number

#include<stdio.h>

int factorial(int number)
{
    if(number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        printf(number * factorial(number -1));
    }
}

int main()
{
    int num;
    printf("enter the number %d\n");
    scanf("%d\n",&num);
    printf("the factoroal of %d is %d\n",factorial(num));
    return 0;
}
