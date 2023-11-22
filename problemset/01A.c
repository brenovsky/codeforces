#include <stdio.h>

int main() {
    long long n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);

    long long width_flags = (n + a - 1) / a;

    long long height_flags = (m + a - 1) / a;

    long long total = width_flags * height_flags;

    printf("%lld\n", total);

    return 0;
}