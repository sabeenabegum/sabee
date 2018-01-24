#include <stdio.h>

int main(void) {
	int a, i,c=0;
	printf("enter the number");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(a%i==0){
			c++;
			}
		
	}
	if(c==2)
	{
	print("prime");
	}
	else
	{
		printf("not prime");
	}
	return 0;
}
