#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int size[n];
    int i, j;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &size[i]);
    }

    int count = 1;
    for (i = 0; i < n; i++)
    {
        if (size[i] != -1)
        {
            for (j = i + 1; j < n; j++)
            {
                if (size[i] == size[j])
                {
                    count++;
                    size[j] = -1;
                }
            }
            printf("Number %d repeats %d times\n", size[i], count);
            count = 1;
        }
    }

    return 0;
}
