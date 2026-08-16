#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n;
        scanf("%d", &n);

        int a[1005];
        int i, j;

        for(i = 0; i < n; i++)
            scanf("%d", &a[i]);

        int size = n;
        int flag = 1;

        while(size > 0)
        {
            int found = 0;
            int temp[1005];
            int k = 0;

            for(i = 0; i < size; i++)
            {
                if(a[i] == size)
                {
                    found = 1;
                }
                else
                {
                    temp[k++] = a[i];
                }
            }

            if(found == 0)
            {
                flag = 0;
                break;
            }

            for(i = 0; i < k; i++)
                a[i] = temp[i];

            size = k;
        }

        if(flag)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}