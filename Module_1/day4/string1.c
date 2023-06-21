#include <stdio.h>
#include <ctype.h>
void upper(char *arr)
{
    char *ptr=arr;
    for(int i=0;ptr[i]!='\0';i++)
    {
        if(isupper(ptr[i]))
        ptr[i]=tolower(ptr[i]);
        else 
        ptr[i]=toupper(ptr[i]);
    }
        for(int i=0;ptr[i]!='\0';i++)
        printf("%c ",ptr[i]);

}
int main()
{
    char arr1[]="Hello2";
    upper(arr1);


}