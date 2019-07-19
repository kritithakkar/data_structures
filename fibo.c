#include<stdio.h>
int main()
{
int i,y,a=0,b=1,temp=1;
scanf("%d",&y);
printf("%d %d ",a,b);
for(int i=1;i<=y;i++)
{
temp=a+b;
a=b;
b=temp;
printf("%d ",temp);
}
return 0;
}
