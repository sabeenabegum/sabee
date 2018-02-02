#include <stdio.h>

int main(void) {
	int n,hour=0,mins;
	scanf("%d",&n);
	if(n<60)
	{
		printf("0 %d",n);
	}
	else
	{
		hour=n/60;
		mins=n%60;
		printf("%d",hour);
		printf("%d",mins);
	}
	return 0;
}
