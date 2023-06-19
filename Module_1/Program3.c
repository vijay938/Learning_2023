#include<stdio.h>
void reverse(int arr[],int len)
{
    int *ptr=arr;
    for(int i=len-1;i>=0;i--)
    printf(" %d",ptr[i]);

}
int main()
{
    int arr1[]={64,84,20,36,12,90};
    reverse(arr1,6);
    return 0;
}