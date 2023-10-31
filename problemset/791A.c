#include <stdio.h>

int main()
{
    int a, b;
    int counter = 0;

    scanf("%d%d", &a, &b);

    while (a <= b) {
        a *= 3;
        b *= 2;
        counter += 1;
    }

    printf("%d", counter);

    return 0;
}