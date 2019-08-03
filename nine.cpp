#include<iostream>
using namespace std;
int main()
{
int m,n;
cin>>m;
cin>>n;
int arr[m][n];
cout<<"enter elements";
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
cin>>arr[i][j];
}
}
cout<<"actual matrix";
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
cout<<arr[i][j]<<" ";
}
cout<<endl;
}
int k,a[m][n];
for(int i=0;i<m;i++)
{ k=0;
for(int j=0;j<n;j++)
{
a[i][k]=arr[j][i];
k++;
}
}
cout<<"result"<<endl;
for(int i=0;i<m;i++)
{
for(int j=n-1;j>=0;j--)
{
cout<<a[i][j]<<" ";
}
cout<<endl;
}
return 0;
}
