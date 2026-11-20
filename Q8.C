#include <stdio.h>

int digitSum(int n)
{
    int sum = 0;

    if (n < 0)
        n = -n;

    while (n > 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }

    return sum;
}

int main()
{
    int n, a[100];
    int i, j, count = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (digitSum(a[i]) == digitSum(a[j]))
                count++;
        }
    }

    printf("%d", count);

    return 0;
}