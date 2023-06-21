#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[20];
    int roll_no;
};

void store_data(struct student *var2,int n1)
{
    struct student *var1=(struct student *)calloc(n1,sizeof(struct student));
    free(var1);
    var1=NULL;

}
int main()
{
    struct student var;
    int n;
    printf("Enter the no of students");
    scanf("%d",&n);
    store_data(&var,n);
    return 0;

}