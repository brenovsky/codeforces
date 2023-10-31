#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int n, diff;
    int i;

    scanf("%ld", &n);

    long int array[n];

    for (i = 0; i < n; i++) {
        scanf("%ld", &array[i]);
    }

    diff = abs(array[0]);
    for (i = 0; i < n; i++) {
        if (abs(array[i]) < diff) {
            diff = abs(array[i]);
        }
    }

    printf("%ld", diff);

    return 0;
}