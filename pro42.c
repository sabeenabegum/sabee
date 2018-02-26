#include <stdio.h>
void main()
{
	int j,d;
	char a[50]="hello",b[45]="worlds";
	j=strlen(a);
	d=strlen(b);
	if(j>d)
	{
		printf("%s",a);
	}
	else if(j<d)
	{
		printf("%s",b);
	}
	else
	{
		printf("%s",a);
	}
}
