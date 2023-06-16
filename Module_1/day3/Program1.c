#include<stdio.h>
void func1(int n)
{
    for(int i=1;i<=n;i++)
    printf("%d",i);

}
void func2(int n1){
    for(int i=1;i<=5-n1;i++)
    {
        printf(" ");
        printf(" ");
    }
}
void func3(int n2)
{
    for(int i=n2;i>=1;i--)
    {
        printf("%d",i);
    }
    printf("\n");
}

int main()
{
    int num=5;
    for(int i=5;i>=1;i--){
    func1(i);
        func2(i);

    func3(i);
    }

}