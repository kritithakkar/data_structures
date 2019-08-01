#include<iostream>
#include<cstring>
using namespace std;
int main(int argc,char *argv[])
{
char *s=argv[1];
char *s1=argv[2];
int r=strcmp(s,s1);
if(r==0)
{
cout<<"equal";
}
if(r>0)
{
cout<<"s is greater";
}
if(r<0)
{
cout<<"s is small";
}
return 0;
}

