#include<stdio.h>
void calculator()
{
    int number1,number2;
    char op;
    printf("Enter number1\n");
    scanf("%d",&number1);
     printf("Enter operand\n");
     op=getchar();
    printf("%c",op);
    printf("Enter number3\n");
    scanf("%d",&number2);


}
int main()
{
    calculator();
    return 0;
}