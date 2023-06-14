#include<stdio.h>
int biggest(int number1,int number2)
{
    if(number1>number2)
    return number1;
    else 
    return number2;

}
int biggestternary(int number1,int number2)
{
    int m1=number1>number2 ? number1:number2;
    return m1;
}
int main()
{
    int num1,num2;
    printf("Enter two numbers");
    scanf("%d",&num1);
    printf("Enter second number");
    scanf("%d",&num2);
    printf("Biggest of two numbers is%d\n",biggest(num1,num2));
    printf("Biggest of two numbers using ternary is%d\n",biggestternary(num1,num2));

}
