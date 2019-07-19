#include<stdio.h>
int main()
{
int arr[]={4,2,3,1};
int *ptr=arr;
while(*ptr!='\0')
{
printf("%d:=",*ptr);
ptr++;
}
return 0;
}
