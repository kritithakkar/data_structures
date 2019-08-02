#include<iostream>
#include<cstring>
using namespace std;
int main(int argc,char *argv[])
{
char *s=argv[1];
char *m=argv[2];
string d;
int l=strlen(s);
int l1=strlen(m);
int o=0,flag=0;
for(int i=0;i<l;i++)
{
for(int j=0;j<l1;j++)
{
if(s[i]==m[j])
{
flag=1;
}
}
if(flag==0)
{
d[o]=s[i];
o++;
}
}
for(int i=0;i<o;i++)
{
cout<<d[i];
}
return 0;
}

