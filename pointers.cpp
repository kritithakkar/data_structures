#include<iostream>
using namespace std;
int main()
{
int *ptr;
int x=10;
ptr=&x;
cout<<"address"<<ptr<<endl;
cout<<"value"<<*ptr<<endl;
ptr=&x;
cout<<++*ptr<<endl;
cout<<"post increment"<<*ptr++<<endl;
ptr=&x;
cout<<"incremented"<<*ptr<<endl;
cout<<"address"<<ptr<<endl;
ptr=&x;
cout<<"incremented value"<<(*ptr)++<<endl;
ptr=&x;
cout<<"result"<<*ptr<<endl;
return 0;
}


