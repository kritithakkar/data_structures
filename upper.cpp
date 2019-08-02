#include<iostream>
#include<cstring>
using namespace std;
int main(int argc,char *argv[])
{
char *d=argv[1];
string m,p;
int l=strlen(d);
int k=0,j=0;
for(int i=0;i<l;i++)
{
if(d[i]>='A' && d[i]<='Z')
{
m[k]=d[i];
k++;
}
else
{
p[j]=d[i];
j++;
}
}
for(int i=0;i<j;i++)
{
cout<<p[i];
}
for(int i=0;i<k;i++)
cout<<m[i];

return 0;
}

