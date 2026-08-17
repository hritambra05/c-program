#include <stdio.h>

int main()
{
    int t;

    scanf("%d", &t);

    while (t--)
    {
        int d1, t1, d2, t2, dir;
        int s1, s2;

        scanf("%d %d", &d1, &t1);
        scanf("%d %d", &d2, &t2);
        scanf("%d", &dir);

        s1 = d1 / t1;
        s2 = d2 / t2;

        if (dir == 1)
        {
            if (s1 > s2)
                printf("%d\n", s1 - s2);
            else
                printf("%d\n", s2 - s1);
        }
        else
        {
            printf("%d\n", s1 + s2);
        }
    }

    return 0;
}