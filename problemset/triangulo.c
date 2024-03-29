#include <stdio.h>
#include <stdlib.h>

void triangular(int* vetor, int n) {

    int a = 0;
    int s = 0;

    for (int i = 0; i < n; i++) {
        a = a + 1;
        s += a;

        vetor[i] = s;
    }
}

int main() {

    int n;
    int* v;

    scanf("%d", &n);

    v = (int*) malloc(sizeof(int) * n);

    triangular(v, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}