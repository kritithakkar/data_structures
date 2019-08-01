#include<iostream>
#include<cstring>
using namespace std;
int main()
{
char d[100],m[100],s1[5];
int l;
cin>>d;
cin>>m;
l=strlen(d);
cout<<"length "<<l;
cout<<endl;
strcpy(s1,d);
cout<<"copy "<<s1;
cout<<endl;
strcat(d,m);
cout<<"concate "<<d<<endl;
int c=strcmp(d,m);
cout<<"comparison "<<c<<endl;
return 0;
}

