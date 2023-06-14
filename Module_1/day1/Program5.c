#include<stdio.h>
int bit_operations(int num,int oper_type)
{
    // C program to set, clear and toggle a bit
    if(oper_type==1)
    return (num|(1<<0));
    else if(oper_type==2)
    	return (num & (~(1 << (30))));
        else if(oper_type==3)
        	return (num ^ (1 << (15)));
}



    // C program to set, clear and toggle a bit


// Driver code
int main()
{
	int n = 5, k = 1;
   int n2=bit_operations(n,k);
   printf("%d",n2);

	return 0;
}
 




// Function to set the kth bit of n
