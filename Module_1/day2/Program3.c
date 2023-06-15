#include<stdio.h>

void sum_alternate_elements(int a[],int len)
{
for(int i=0;i<len;i++){
    if(i%2==0)
    printf("%d\n",a[i]);

}
}
int main()
{
    int a[]={4,2,8,4,4};
    sum_alternate_elements(a,5);

}