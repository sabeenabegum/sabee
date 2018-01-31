#include <stdio.h>

int main(void) {
	int i,n,a[10],min;
	scanf("%d",&n);
	min=a[1];
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		min=a[1];
	}
		for(i=1;i<=1;i++)
		{
			if(a[i]<min)
			{
				min=a[i];
			}
		{
				printf("%d",min);
			}
		}
	
	return 0;}
