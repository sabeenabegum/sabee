#include<stdio.h>
int main()
{
	int i,j,n,temp,a[10];
	scanf("%d",&
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			for(temp=0;temp<=n;temp++)
			{
				printf("%d",temp);
			}
		}
		
	}
	return 0;
}
