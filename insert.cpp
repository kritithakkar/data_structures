#include<iostream>
#include<string>
using namespace std;
int main(int argc,char *argv[])
{
string s=argv[1];
string s1=argv[2];
int index;
cin>>index;
s.insert(index,s1);
cout<<s<<endl;
return 0;
}
