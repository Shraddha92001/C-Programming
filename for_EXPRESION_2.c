#include<stdio.h>

int for2()
{
    int i , j;
    for ( j = 8, i = 6; i < 10; i++)//EXPRESION 2 OF FOR LOOP WHERE WE INCREMENT ONLY I 
    {
        /* code */
        printf("%d %d \n",i,j);
    }
    
}
int main()
{
    for2();
    return 0;
}