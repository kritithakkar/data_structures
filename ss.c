#include<stdio.h>
#include<string.h>
int main()
{
char str[15]="hello world";
char str1[]="hello world";
char str2[]={'h','e','l','l','o','\0'};
char *str3="hello c";;
char str4[10];
strcpy(str4,str3);
printf("%s\n",str);
printf("%s\n",str1);
printf("%s\n",str2);
puts(str);
puts(str1);
puts(str2);
printf("%s ",str3);
printf("%x",str4);
return 0;
}
