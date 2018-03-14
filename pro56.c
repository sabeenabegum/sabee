#include <stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    gets(ch);
    int k,i,t=0,t1=0,t2=0;
    k=strlen(ch);
    for(i=0;i<k;i++)
    {
    	if(ch[i]>='a'&&ch[i]<='z')
    	t++;
    	else if(ch[i]>='A'||ch[i]<='Z')
    	t1++;
    	if(ch[i]>='0'||ch[i]<='9')
    	t2++;
    }
    if(t!=0&&t1!=0&&t2!=0)
    printf("yes");
    else
    printf("no");
    return 0;
}

