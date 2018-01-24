#include <stdio.h>
int main(void) {
	int i,j,a[50],temp,n;
	scanf("%d",&n);
	for(i=0;i<n-1;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		ptintf("medium element is %d",a[n/2]);
		
	}
	return 0;
}
