#include<stdio.h>


int while1()
{
    int i= 10 ;
    while (i < 30)
    {
        /* code */  
        printf("%d\n",i+1);
        i++;
    }
    
    return 0;
}
int main()
{
    while1();
    return 0;
}