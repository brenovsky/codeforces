#include <stdio.h>

int main()
{
    int n;
    int result = 0;
    char variation[4];
    char sum = '+';

    scanf("%d", &n);

    getchar();

    for (int i = 0; i < n; ++i) {
        scanf("%s", variation);

        if (variation[1] == sum)
            result++;
        else
            result--;
    }

        printf("%d", result);

        return 0;
    }