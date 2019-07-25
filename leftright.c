#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
int arr[argc],z=0,i;
for(i=2;i<argc;i++)
{
arr[z]=atoi(argv[i]);
z++;
}
int s;
scanf("%d",&s);
int ar[100],as[100];
int y=z/2;
for(int i=0;i<y;i++)
{
ar[i]=arr[i];
}
int k=0;
for(int i=y;i<z;i++)
{
as[k]=arr[i];
k++;
}
int yo[50];
for(int j=0;j<y;j++)
{
yo[i]=ar[(j+s)%y];
printf("%d ",yo[i]);
}
int u=(z-y);
int g[40];
printf("\n");
for(int i=0;i<s;i++)
{
g[i]=as[u-s+i];
}
int t=(u-s);
for(int k=0;k<t;k++)
{
g[s+k]=as[k];
}
for(int i=0;i<u;i++)
{
printf("%d ",g[i]);
}
return 0;
}
