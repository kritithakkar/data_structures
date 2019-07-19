#include<stdio.h>
int main()
{
int a[50],n,i,s,flag=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&s);
for(i=0;i<n;i++)
{
if(a[i]==s)
{
printf("%d is present at location %d.\n",s,i+1);
flag++;
}
}
if(flag==0)
{
printf("Element not found");
}
else
{
printf("%d is present %d times in array",s,flag);
}
return 0;
}
