#include<stdio.h>
int main()
{
	int i,f,l;
	printf("enter 1st interval");
	scanf("%d",&f);
	printf("enter 2nd interval");
	scanf("%d",&l);
	for(i=f;i<=l;i++)
	{
		if(i%2==1)
		{
			printf("%d is an even no",i);
		}
		return 0;
	}
}
