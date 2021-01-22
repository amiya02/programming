#include<stdio.h>
int main()
{
char str[200];
while(gets(str))
{
int num=0,i,j;
for(i=0;str[i];i++)
{
switch(str[i])
{
case '0':num+=str[i]-'0';break;
case '1':num+=str[i]-'0';break;
case '2':num+=str[i]-'0';break;
case '3':num+=str[i]-'0';break;
case '4':num+=str[i]-'0';break;
case '5':num+=str[i]-'0';break;
case '6':num+=str[i]-'0';break;
case '7':num+=str[i]-'0';break;
case '8':num+=str[i]-'0';break;
case '9':num+=str[i]-'0';break;

case 'b':for(j=0;j<num;j++)
printf(" ");
num=0;
break;
case '!':printf("\n");
default:for(j=0;j<num;j++)
putchar(str[i]);
num=0;
}
}
printf("\n");
}


return 0;
}
