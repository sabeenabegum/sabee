#include <stdio.h>
int main(void) {
	int n,result=0,rem,t;
	printf("enter the number");
	scanf("%d",&n);
	t=n;while(n!=0)
	{
		rem=n%10;
		result=result+rem*rem*rem;
		n=n/10;
	}
	if(t==result)
	{
		printf("%d yes",n);
	}
	else
	{
		printf("%d no",n);
	}
	return 0;
}
