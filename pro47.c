#include<stdio.h>
int main()
{
    int i,j,n,a[15],tmp;
    printf("Enter the array size\n");
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d\n",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    printf("%d\t%d",a[1],a[n-1]);
    return 0;

}

   
