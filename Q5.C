#include <stdio.h>

int gcd(int a, int b)
{
    int temp;

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d", gcd(a, b));

    return 0;
}