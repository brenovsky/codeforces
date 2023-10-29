#include <stdio.h>

int main()
{
    long int n;
    int lucky = 1;
    int algarism;

    scanf("%ld", &n);

    if (n < 10 || n % 10 == 0) {
        printf("NO");
    }
    else {
        while (lucky) {
            algarism = 0;


            while (n % 10 != 0) {
                n -= 1;
                algarism += 1;
            }

            if (algarism == 4 || algarism == 7) {
                n /= 10;
            }
            else if  (n == 0) {
                printf("YES");
                lucky = 0;
            }
            else {
                printf("NO");
                lucky = 0;
            }

        }
    }

    return 0;
}