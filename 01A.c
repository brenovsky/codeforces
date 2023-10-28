#include <stdio.h>

int main()
{
    long int n, m, a;
    int counter = 1;
    long int A, B, C;

    scanf("%ld%ld%ld",&n, &m, &a);

    A = a * (n - a);
    B = a * (m - a);
    C = (m - a) * (n - a);

    if (A < a * a) {
        while (A < a * a) {
            A += a * a;
            counter += 1;
        }
    }
    else {
        counter += 1;
    }

    if (B < a * a) {
        while (B < a * a) {
            B += a * a;
            counter += 1;
        }
    }
    else {
        counter += 1;
    }

    if (C < a * a) {
        while (C < a * a) {
            C += a * a;
            counter += 1;
        }
    }
    else {
        counter += 1;
    }

    printf("%d", counter);

    return 0;
}