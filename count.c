#include<stdio.h>
int main() {
    int n, t, count=0;
    printf("Enter an integer\n");
    scanf("%d", &n);
    t = n;
     
    while(t!=0) {
        t = t/10;
        ++count;
    }
    printf("Number of digits in %d : %d",n, count);
return 0;
}
