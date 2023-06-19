#include <stdio.h>
void sum_avg(int arr[],int len)
{
	int *ptr=arr;
	int sum=0,avg=0;
	for(int i=0;i<len;i++)
	{
		sum=sum+(*(ptr+i));
	}
	avg=sum/len;
	printf("Sum %d\n",sum);
	printf("avg%d\n",avg);
}
int main()
{
	int arr1[]={12,84,20,36,64};
	sum_avg(arr1,5);
}