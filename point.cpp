#include<iostream>
using namespace std;
int main()
{
int arr[5]={1,2,3,4,5};
cout<<"base"<<arr<<endl;
cout<<"arr+1"<<arr+1<<endl;
cout<<"value"<<*(arr)<<endl;
cout<<"value next"<<*(arr+1)<<endl;
for(int i=0;i<5;i++)
{
cout<<*(arr+i)<<" ";
}
return 0;
}
