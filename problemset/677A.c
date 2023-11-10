#include <stdio.h>

int main()
{
    int n, h;
    int width = 0;

    scanf("%d%d", &n, &h);

    int heights[n];

    for (int i = 0; i < n; i += 1) {
        scanf("%d", &heights[i]);
        if (heights[i] <= h) {
            width++;
        }
        else {
            width += 2;
        }
    }

    printf("%d", width);

    return 0;
}