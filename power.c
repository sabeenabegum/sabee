#include <stdio.h>

int main(void) {
	int a,c=1,b,i;
	scanf("%d",&a);
	scanf("%d",&b);
	for(i=1;i<=b;i++)
	{
		c=c*a;
	}
	printf("%d",c);
	return 0;
}
