#include<stdio.h>
int main()
{
int n,j=0,arr[20],u,a[30],p[20],t;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
scanf("%d",&u);
for(int i=0;i<u;i++)
{
a[i]=arr[n-u+i];
}
t=(n-u);
for(int j=0;j<t;j++)
{
a[u+j]=arr[j];}
for (int i=0;i<n;i++){
printf("%d ",a[i]);
}
return 0;
}
