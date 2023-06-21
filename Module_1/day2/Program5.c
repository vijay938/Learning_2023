// C program to Count set
// bits in an integer
#include <stdio.h>

/* Function to get no of set bits in binary
representation of positive integer n */
 int countSetBits(int arr[],int len)
{
int count=0;
    for(int i=0;i<len;i++)
    {

    
	while (arr[i]) {
		count += arr[i] & 1;
		arr[i] >>= 1;
	}
    }
	return count;
}

/* Program to test function countSetBits */
int main()
{
    //	int a[]={0x1000, 0x2000, 0x10AF, 0xABCD, 0xF100};
int a[]={0x1,0xF4,0x10001};
    printf("%d\n",a[0]);
	printf("%d", countSetBits(a,3));
	return 0;
}
