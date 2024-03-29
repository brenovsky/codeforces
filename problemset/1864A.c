#include <stdio.h>
#include <stdlib.h>

int calculoTriangular(int n) { //devolve o triangular da posição "n"

    int a = 0;
    int s = 0;

    for (int i = 0; i < n; i++) {
        a = a + 1;
        s += a;
    }
    return s;
}

void retornarCaso(int* vetor, int n) {

    //retornar o possivel caso
    for (int i = n - 1; i > 0; i--) {
        vetor[i] += calculoTriangular(n - i);
    }

    for (int j = 0; j < n; j++) {
        printf("%d ", vetor[j]);
    }
}

int main()
{

    int x, y, n;
    int intervalo;
    int* v;

    scanf("%d %d %d", &x, &y, &n);

    intervalo = y - x;

    v = (int*) malloc(sizeof(int) * n);

    v[0] = x;
    v[n - 1] = y; //vou precisar de Lista Encadeada, para encaixar os elementos no meio disso aqui!

    /* conferir se o intervalo é menor do que o triangular n-1
    caso seja, não é possível montar a lista, já que, para que se mantenha as condições do enunciado,
    é preciso, no mínimo, ter um intervalo total com triangulares. */
    if (intervalo < calculoTriangular(n-1)) {
        printf("-1\n");
    } else {

        retornarCaso(v, n);

    }

    return 0;

}