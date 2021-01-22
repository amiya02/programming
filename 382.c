#include<stdio.h>
int main()
{
int n;
printf("PERFECTION OUTPUT\n");
while(scanf("%d",&n)!=EOF)
{
    if(n==0)
    {
        printf("END OF OUTPUT\n");
        break;}
    int temp,sum=0,i;
    temp=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
            sum+=i;
    }
    if(sum==temp)
        printf("%5d  PERFECT\n",temp);
    else if(sum>temp)
        printf("%5d  ABUNDANT\n",temp);
    else if(sum<temp)
        printf("%5d  DEFICIENT\n",temp);

}
return 0;
}
