#include <stdio.h>
int main(void) 
{
	int n,i,t1=0,t2=1,temp;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("%d",t1);
		temp=t1+t2;
		t1=t2;
		t2=temp;
	}
	return 0;
}
