#include <stdio.h>

int main()
{
    long long n;
    int algarism;
    int count = 0;

    scanf("%lld", &n);

    while (n != 0) {
        algarism = n % 10;

        if (algarism == 4 || algarism == 7) {
            count += 1;
        }

        n = (n - algarism) / 10;
    }

    if (count == 4 || count == 7) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}