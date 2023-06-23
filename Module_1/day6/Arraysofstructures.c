#include <stdio.h>
#include <stdlib.h>
struct Student{
    int roll_no;
    char name[20];
    float marks;
};

void parse(char str[],struct Student *str1)
{
  char *ptr=str;
    sscanf(ptr," %d %s %f",&(str1->roll_no),str1->name,&(str1->marks));
    printf("Roll no %d\n",str1->roll_no);
    printf("Name %s\n",str1->name);
    printf("Marks %f\n",str1->marks);

}
int main()
{
    int n;
    printf("Enter the no of students");
    scanf("%d\n",&n);
  /*  char str1[20]="1001 Aron 100";*/
    /*struct Student var[n];*/
    struct Student *var= (struct Student *)calloc(n,sizeof(struct Student));
    struct Student var1,var2,var3;
    char *str2=(char*)calloc(8,sizeof(char)*20);
    char *str1="1001 Aron 100";
 /*   parse(str1,&var1);
        char str4[20]="1002 h1 100";
    parse(str4,&var2);*/
 /*   char str5[20];
       scanf("%[^\n]%*c", str5);*/

  /*  printf(" %s",str5);*/
 /*   parse(str5,&var3);*/


   
      /*  free(var[i]);
        var[i]=null;*/
    
    for(int i=0;i<n;i++)
    {
             scanf("%[^\n]%*c", str2+i);

   /*  scanf(" %s\n",str2+i);*/
     printf(" %s\n",str2+i);
             parse(str2+i,var+i);


    }
     /*   for(int i=0;i<n;i++)
    { 
        parse(&str2[i],&var[i]);

}*/
}