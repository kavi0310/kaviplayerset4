#include<stdio.h>
int main()
{
    char a[100];
    int i,c=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        c++;
    }
    for(i=0;i<c;i=i+3)
    {
       printf("%c",a[i]); 
    }
}
