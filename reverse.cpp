#include<iostream>
#include<string>
using namespace std;
int main(int argc,char *argv[])
{
string m;
string s=argv[1];
int r=s.size();
for(int i=r;i>-1;i--)
{
cout<<s[i];
}
return 0;
}

