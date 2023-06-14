#include<stdio.h>
void percentage(int roll_no,char name[],int physics,int math,int chemistry)
{
    int total=physics+math+chemistry;
    int pt1=(total*100)/300;;
    printf("The total is%d\n",total);
    printf("The percenatge is%d\n ",pt1);
    printf("%s",name);

}
int main()
{
    char name[20];
    int roll_no1;
    int physics1;
    int math1;
    int chemistry1;
    printf("Enter your name");
       scanf("%[^\n]%*c", name);



    printf("Enter roll no");
    scanf("%d",&roll_no1);
    printf("Enter physics marks");
        scanf("%d",&physics1);

printf("Enter chemistry marks");
    scanf("%d",&chemistry1);

printf("Enter math marks");
    scanf("%d",&math1);
    percentage(roll_no1,name,physics1,math1,chemistry1);

}
