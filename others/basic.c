#include <stdio.h>
#include<string.h>
int main()
{
int n;
char s[15];
do{
printf("Please enter a number between 0 and 10 :");
scanf("%d",&n);
}while(n>10 || n<0);

do{
printf("Please enter a string of a maximum length of 15:");
scanf("%s",&s);

}while(strlen(s) >15 || strlen(s)<1);

printf("%d\n",n*2);
printf("%s",s);
}
