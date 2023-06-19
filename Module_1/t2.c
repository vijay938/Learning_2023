#include<stdio.h>
int main()
{
   char ch='A';
   printf("%ld %ld %ld", sizeof(ch), sizeof(sizeof('A')), sizeof(3.14));
   printf("\n");
   return 0;
}
