#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
int arr[argc],k,i,z=0,temp;
for(i=2;i<argc;i++)
{
arr[z]=atoi(argv[i]);
z++;
}
//k=sizeof(arr)/sizeof(arr[0]);
for(int j=0;j<z;j++)
{
for(int m=0;m<z-j-1;m++)
{
if(arr[m]>arr[m+1])
{
temp=arr[m];
arr[m]=arr[m+1];
arr[m+1]=temp;
}
}
}
for(int j=0;j<z;j++)
{
printf("%d ",arr[j]);
}
return 0;
}
