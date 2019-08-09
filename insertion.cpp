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
for(int i=1;i<z;i++)
{
int key=0;
int j=i;
while(j>0 && arr[j-1]>arr[j])
{
key=arr[j];
arr[j]=arr[j-1];
arr[j-1]=key;
j--;
}
}
for(int i=0;i<z;i++)
{
cout<<arr[i]<<" ";
}
return 0;
}
