#include<stdio.h>
int main(int argc,char *argv[])
{
int m,arr[argc],z=0,i,flag;
for(i=2;i<argc;i++)
{
arr[z]=atoi(argv[i]);
z++;
}
int min=arr[0];
for(int i=0;i<z;i++)
{
if(min>arr[i]);
min=arr[i];
}
for(int i=1;i<=min;i++)
{
flag=0;
for(int j=0;j<z;j++)
{
if(arr[j]%i==0)
{
flag++;
}
}
if(flag==z)
{
m=i;
}
}
printf("%d",m);
return 0;
}
