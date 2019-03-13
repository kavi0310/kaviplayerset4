#include<stdio.h>
int main()
{
char a[100];
int b1=0,c1=0,d1=0,e1=0,f1=0,g1=0,i;
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='{')
b1++;
else if(a[i]=='[')
c1++;
else if(a[i]=='(')
d1++;
else if(a[i]=='}')
e1++;
else if(a[i]==']')
f1++;
else
g1++;
}
if(b1==e1&&c1==f1&&d1==g1)
printf("yes");
else
printf("no");
}
