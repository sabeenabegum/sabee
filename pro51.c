#include<stdio.h>
int main()
{
int n,count=0,rem,rev=0,a;
scanf("%d",&n);
while(n!=0)
{
 rem=n%10;
 rev=rev*10+rem;
 n=n/10;
}
while(rev!=0)
{
   a=rev%10;
   printf("%d ",a);
   rev=rev/10;
}
return 0;
}
