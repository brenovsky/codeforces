#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x, y, n;
    int* a;

    scanf("%d %d %d", &x, &y, &n);

    a = (int*) malloc(sizeof(int) * n);

    a[0] = x;
    a[n] = y;

    //vou precisar de lista encadeada

    free(a);

    return 0;

}