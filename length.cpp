#include<iostream>
#include<string>
using namespace std;
int main(int argc,char *argv[])
{
string str=argv[1];
int i=0;
while(str[i]!='\0')
{
i++;
}
cout<<i<<endl;
return 0;
}
