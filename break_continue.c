#include<stdio.h>

int main()
{
    int i ,n;
    for (i = 0; i < 10; i++)
    {
        /* code */
        printf("%d\nenter ther no..\n",i);
        scanf("%d",&n);

        if (n > 10)
        {
            continue;
            /* code */
        }
        printf("hello.....");   
    }
    
    
    return 0;
}