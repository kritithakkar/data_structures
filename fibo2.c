#include<stdio.h>
int recur(int n)
{
if(n==1||n==0)
return n;
else
{
return (recur(n-1)+recur(n-2));
}
}
int main()
{
int n,a=0,b=1;
scanf("%d",&n);
while(a<n)
{
printf("%d ",recur(a));
a++;
}
return 0;
}
