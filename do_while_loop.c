#include<stdio.h>
int do_while1()
{
    int i = 0;
    do
    {
        printf("hello this is do while loop example  %d \n"); //it runs atleast once......
        i++;
    } 
    while (i <= 10);
    return 0; 
}
int main()  
{
    do_while1();
    return 0;
}