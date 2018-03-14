#include<stdio.h>
int main()
{
char a[20];
int i,k;
printf(" enter the number :");
scanf("%d",&k);
printf(" enter the character:");
scanf("%s",a);
for(i=0;i<k;i++)
{
printf("%s",a[i]);
}
return 0;
}
