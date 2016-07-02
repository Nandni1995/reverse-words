#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[]="This is an example";
char b[50][50],c[50][50];
int i=0,j=0,k=0;
clrscr();
while(a[i]!='\0')
{
b[k][j]=a[i];
i++;
j++;
if(a[i]==' ')
{
b[k][j]='\0';
k++;
j=0;
}
}
b[k][j]='\0';
j=k;
for(i=0;i<=k;i++)
{
strcpy(c[i],b[j]);
j--;
}
for(i=0;i<=k;i++)
{
printf("%s",c[i]);
}
getch();
}
