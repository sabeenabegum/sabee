
  #include<stdio.h>
    int main()
    {
    	int a,n,temp;
    	scanf("%d %d",&a,&n);
    	temp=a;
    	a=n;
    	n=temp;
    	printf("%d %d",a,n);
    return 0;
    }
