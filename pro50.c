#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    b=(a&(a-1));
    if(b==0)
    printf("yes");
    else
    printf("no");
    return 0;
}
    
