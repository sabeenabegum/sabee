#include <stdio.h>

int main(void) {

    int i, n, sum = 0;
    printf("Enter an integer number \n");

    scanf ("%d", &n);

    for (i = 1; i <= n; i++)

    {

        sum = sum + i;

    }

    printf ("Sum of first %d natural numbers = %d\n", n, sum);
return 0;
}
