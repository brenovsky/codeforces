#include <stdio.h>
//não funcionando para todos os casos
int main()
{
    long int colors[4];
    long int aux[4];
    int count = 0;

    for (int i = 0; i < 4; ++i) {
        scanf("%ld", &colors[i]);
    }

    colors[0] = aux[0];

    for (int i = 1; i < 4; i++) {

        for (int j = 0; j < i; j++) {
            if (colors[i] == aux[j]) {

                count++;
            }
        }

        aux[i] = colors[i];
    }

    printf("%d", count);

    return 0;
}