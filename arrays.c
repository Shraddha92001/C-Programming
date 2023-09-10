#include<stdio.h>

int result()
{
    int marks[14];
    marks[0] = 60;
    printf("marks of stud 1 is %d\n: ",marks[0]);
    marks[1] = 90;
    printf("marks of stud 2 is %d\n: ",marks[1]);
}
int main()
{
    result("%d");
    return 0;
}