#include<iostream>
#include<stdlib.h>
using namespace std;
int main(int argc,char *argv[])
{
int arr[argc],z=0,i;
for(i=2;i<argc;i++)
{
arr[z]=atoi(argv[i]);
z++;
}
int ar[z];
int m=0;
int k,temp;
for(int i=0;i<z;i++)
{
int min=arr[i];
for(int j=i+1;j<z;j++)
{
if(arr[j]<min)
{
min=arr[j];
k=j;
}
}
if(min!=arr[i])
{
temp=arr[k];
arr[k]=arr[i];
arr[i]=temp;
cout<<temp<<" ";
}
}
cout<<arr[z-1];
return 0;
}
