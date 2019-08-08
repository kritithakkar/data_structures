#include<iostream>
using namespace std;
int main()
{
int m,n,m1,n1;
cin>>m;
cin>>n;
cin>>m1;
cin>>n1;
int arr[m][n];
int ar[m1][n1];
int sum=0;
int a[50][50];
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
cin>>arr[i][j];
}
}
for(int i=0;i<m1;i++)
{
for(int j=0;j<n1;j++)
{
cin>>ar[i][j];
}
}
if(n==m1)
{
for(int i=0;i<m;i++)
{
for(int j=0;j<n1;j++)
{
for(int k=0;k<n;k++)
{
sum=sum+arr[i][k]*ar[k][j];
a[i][j]=sum;
}
}
}
for(int i=0;i<m;i++)
{cout<<endl;
for(int j=0;j<n1;j++)
{
cout<<a[i][j]<<" ";
}
}
}
return 0;
}
