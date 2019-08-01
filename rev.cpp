#include<iostream>
#include<cstring>
#include<string>
using namespace std;
void rev(string str)
{
int r=str.size();
if(r==1)
cout<<str<<endl;
else
{
cout<<str[r-1];
rev(str.substr(0,r-1));
}
}
int main(int argc,char *argv[])
{
string d=argv[1];
rev(d);
return 0;
}
