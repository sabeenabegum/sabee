#include <stdio.h>

int main()
{
	int i,n,k,b=0;
	scanf("%d,%d,%d",&n,&k);
	int a[5];
	for(i=1;i<=n;i++)
	{
		scanf("%d\n",&a[i]);
	}
	for(i=1;i<=k;i++)
	{
		b=b+a[i];
	}
	printf("%d",b);
	return 0;
}
