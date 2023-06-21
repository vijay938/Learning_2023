#include<stdio.h>
void swap(int num1,int num2)
{
int temp=num1;
num1=num2;
num2=temp;
printf("Numbers after swapping %d\t%d\n ",num1,num2);

}
int main()
{
    int x1=2,y1=4;
    printf("Numbers before swapping%d\t%d",x1,y1);

    swap(x1,y1);

}