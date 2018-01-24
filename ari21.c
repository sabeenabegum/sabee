#include<stdio.h>
int main()
{
	int j,k,m,sum=0,temp,i;
	scanf("%d%d%d",&j,&k,&m);
	for(i=0;i<j;i++)
	{
		temp=sum+k;
		sum=temp;
		k=k+m
	}
	printf("%d",temp);
	return 0;
  }
