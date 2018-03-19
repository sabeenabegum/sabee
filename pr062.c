#include <stdio.h>
#include<string.h>
int main()
{
    int i,n,c;
    char a[19];
    scanf("%s",&a);
    n=strlen(a);
for(i=0;i<n;i++)
{
    if(a[i]=='1'||a[i]=='0')
    {
        c++;
    }
}
if(c==n)
{
    printf("yes");
}
else
{
    printf("no");
}
return
