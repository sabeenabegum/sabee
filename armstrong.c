#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int l,h,i,a,b,rem,n=0,result=0;
	printf(enter two interval:");
	scanf("%d%d",&l,&h);
	for(i=l+1;i<h;i++)
	{
		a=i;
		b=i;
		while(a!=0)
		{
    rem=b%10;
		result=poe(rem,n);
		b/=10;
		}
		if(result==i
		{
			printf("%d",i);
			getch();
			
		}
	}
}
