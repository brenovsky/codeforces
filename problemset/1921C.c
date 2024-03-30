#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, f, a, b;

    scanf("%d %d %d %d", &n, &f, &a, &b);

    int* vetor = (int*) malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    if (f - (a * vetor[n - 1]) >= 0) {
        printf("YES\n");
    } else {

    }



    return 0;
}