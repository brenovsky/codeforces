#include <stdio.h>

int main()
{
    int n, p, q;
    int count = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i += 1) {
        scanf("%d%d", &p, &q);

        if (q - p >= 2) {
            count += 1;
        }
    }

    printf("%d", count);

    return 0;
}