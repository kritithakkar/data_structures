#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
int arr[argc],z=0,i;
for(i=2;i<argc;i++)
{
arr[z]=atoi(argv[i]);
z++;
}
int f;
scanf("%d",&f);
for(int i=0;i<z;i++)
{
printf("%d ",arr[(i+f)%z]);
}
return 0;
}

