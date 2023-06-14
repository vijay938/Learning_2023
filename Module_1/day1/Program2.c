#include<stdio.h>
void grade(int marks)
{
    if(marks>=90)
    printf("Grade A");
    else if(marks>=75&&marks<=89)
    printf("Grade B");
    else if(marks>=60&&marks<=74)
     printf("Grade C");
     else if(marks>=50&&marks<=59)
     printf("Grade D");
     else
     printf("Grade E");
}
int main()
{
    int m1;
    printf("Enter your marks\n");
    scanf("%d",&m1);
    grade(m1);

}