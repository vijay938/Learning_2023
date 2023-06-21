#include <stdio.h>
struct value{
    int a;
    int b;
} ;

void swapping(struct value *var1,struct value *var2)
{
    struct value temp=*var1;
    *var1=*var2;
    *var2=temp;

  /*  temp->a=var1->a;
    temp->b=var1->b;
    var1->a=var2->a;
    var1->b=var2->b;
    var2->a=temp->a;
    var2->b=temp->b;*/
 printf(" Value of  variables in first structure %d %d",var1->a,var1->b);
 printf("Value of variables  in second structure %d %d ",var2->a,var2->b);  

}
int main()
{
    struct value var3,var4;
    var3.a=4;
    var3.b=2;
    var4.a=5;
    var4.b=8;
    swapping(&var3,&var4);
    return 0;
}