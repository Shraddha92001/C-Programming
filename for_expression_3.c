#include<stdio.h>


int for3()
{
    int i , j;
    for (i = 0, j = 0; i < 10 ;j++, i++)// EXPRESSION 3 WHERE we increment i and j both
    {
        /* code */
        printf("%d %d\n", i ,j);
    }
    
}
int main()
{
    for3();
    return 0;
}