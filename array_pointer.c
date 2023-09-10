//arithmetic of pointer with array
// ++, -- ,+ ,-
#include<stdio.h>

int main()
{
    int arr[] = {10,20,30,40,50,60};
    int* arrptr = arr;
    printf("the value of element of array is %d\n",arr[1]);
    printf("the value of element of array is %d\n", *(&arr [3]));
    printf("%d\n", arr[3]);
    printf("%d\n", arr + 1);
    printf("the address of 1st element is  %d\n", &arr[0]);
    printf("the address of 1st element is  %d\n", arr);
    printf("the address of 2nd element is  %d\n", arr + 1);

    arrptr++;

}