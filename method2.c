#include<stdio.h>
void min(int arr[],int z,int k)
{
int temp;
for(int i=0;i<k;i++)
{
temp=arr[z-1];
for(int j=z-1;j>0;j--)
{
arr[j]=arr[j-1];
}
arr[0]=temp;
}
for(int i=0;i<z;i++)
{
printf("%d ",arr[i]);
}
}

int main(int argc,char *argv[])
{
int arr[argc],i,z=0;
for(int i=2;i<argc;i++)
{
arr[z]=atoi(argv[i]);
z++;
}
int k;
scanf("%d",&k);
min(arr,z,k);
}
