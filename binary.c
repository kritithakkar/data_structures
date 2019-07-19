#include<stdio.h>
#include<stdlib.h>
int binary(int arr[],int n,int l,int r)
{
if(r>=l)
{
int mid;
mid=l+(r-l)/2;
if(arr[mid]==n)
return mid;
else if(arr[mid]>n)
{
return binary(arr,n,mid+1,r);
}
else
{
return binary(arr,n,l,mid-1);
}}
return -1;
}
int main(int argc,char *argv[])
{
int arr[argc],i,z=0;
for(i=2;i<argc;i++)
{
arr[z]=atoi(argv[i]);
z++;
}
int n,r;
scanf("%d",&n);
r=binary(arr,n,0,argc-1);
printf("%d",r);
}


