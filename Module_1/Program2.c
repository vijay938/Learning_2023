#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))

void min_max(int arr[],int len)
{
    int *ptr=arr;
    int max1=0,min1=ptr[0];
    for(int i=0;i<len;i++)
    {
        max1=MAX(max1,(*(ptr+i)));
        min1=MIN(min1,(*(ptr+i)));
    }
    printf("Maximum %d\n",max1);
    printf("Minimum %d\n",min1);
}
int main()
{
    int arr1[]={64,84,20,36,12,90};
    min_max(arr1,6);
    return 0;
}