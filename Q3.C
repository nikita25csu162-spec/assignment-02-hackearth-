#include <stdio.h>

long long area(int length, int width)
{
    return (long long)length * width;
}

int main()
{
    int l, w;

    scanf("%d %d", &l, &w);

    printf("%lld", area(l, w));

    return 0;
}