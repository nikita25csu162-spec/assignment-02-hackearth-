#include <stdio.h>

int isPerfectSquare(int n)
{
    int i;

    if (n < 0)
        return 0;

    for (i = 0; i <= n / (i + 1); i++)
    {
        if ((long long)i * i == n)
            return 1;
    }

    return 0;
}

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d", isPerfectSquare(n));

    return 0;
}