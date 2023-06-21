#include<stdio.h>
void diff(int arr[],int len)
{
    int *ptr=arr;
    int even=0,odd=0;
    for(int i=0;i<len;i++)
    {
        if(i%2==0)
        even=even+ptr[i];
        else
        odd=odd+ptr[i];
    }
int diff=even-odd;
printf("%d",diff);

}
int main()
{
    int arr1[]={64,84,20,36,12,90};
    diff(arr1,6);
    return 0;
}