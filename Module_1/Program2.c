#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
FILE *fin,*fout;
fin=fopen("file1.txt","r+");
fout=fopen("file2.txt","w");
char *ptr=(char *)calloc(14,sizeof(char *));
size_t maxlen=50;



while(getline(&ptr,&maxlen,fin)!=-1)
{
    printf("%s",strupr(ptr));
 /* char str[20];
  strcpy(str,strupr(ptr));
    fprintf(fout," %s",str);*/
    
}
return 0;
}
