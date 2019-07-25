#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
int arr[argc],z=0,i;
for(i=2;i<argc;i++)
{
arr[z++]=atoi(argv[i]);
}
int f;
scanf("%d",&f);
int s=arr[0];
int m=arr[z-1];
int y=(s+m)/2;
int ak[y];
for(int i=0;i<y;i++)
{
ak[i]=arr[i];
}
for(int i=0;i<y;i++)
{
printf("%d ",ak[(i+f)%y]);
}
printf("\n");
int ar[100];
int u=(z-y);
int lo[u],k=0;
for(int i=y;i<z;i++)
{
lo[k]=arr[i];
k++;
}
printf("\n");
for(int i=0;i<f;i++)
{
ar[i]=lo[u-f+i];
}
int t=(u-f);
for(int i=0;i<t;i++)
{
ar[f+i]=lo[i];
}
for(int i=0;i<u;i++)
{
printf("%d ",ar[i]);
}
return 0;
}
