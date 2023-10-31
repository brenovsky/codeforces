#include <stdio.h>

int main()
{
    int n;
    int x, y, z;
    int sum1 = 0;
    int sum2 = 0;
    int sum3= 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i += 1) {
        scanf("%d%d%d", &x, &y, &z);
        sum1 += x;
        sum2 += y;
        sum3 += z;
    }

    if (sum1 == 0 && sum2 == 0 && sum3 == 0) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}