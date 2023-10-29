#include <stdio.h>

int main()
{
    int M, N;
    int dominos;

    scanf("%d%d", &M, &N);

    if ((M * N) % 2 == 0) {
        dominos = (M * N) / 2;
    }
    else {
        dominos = ((M * N) - 1) / 2;
    }

    printf("%d", dominos);

    return 0;
}