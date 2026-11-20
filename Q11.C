#include <stdio.h>

int main()
{
    int a[10][10];
    int r, c, i, j;
    int min, max, found = 0;

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    }

    for (i = 0; i < r; i++)
    {
        min = a[i][0];

        for (j = 1; j < c; j++)
        {
            if (a[i][j] < min)
                min = a[i][j];
        }

        for (j = 0; j < c; j++)
        {
            if (a[i][j] == min)
            {
                max = a[0][j];

                for (int k = 1; k < r; k++)
                {
                    if (a[k][j] > max)
                        max = a[k][j];
                }

                if (min == max)
                {
                    printf("%d %d %d", i, j, min);
                    found = 1;
                    return 0;
                }
            }
        }
    }

    if (found == 0)
        printf("None");

    return 0;
}