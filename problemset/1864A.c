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

void retornarCasos() {
    //retornar o possivel caso
}

int main()
{

    int x, y, n;
    int intervalo;

    scanf("%d %d %d", &x, &y, &n);

    intervalo = y - x;

    /* conferir se o intervalo é menor do que o triangular n-1
    caso seja, não é possível montar a lista, já que, para que se mantenha as condições do enunciado,
    é preciso, no mínimo, ter um intervalo total com triangulares. */
    if (intervalo < calculoTriangular(n-1)) {
        printf("-1\n");
    } else {
        //agora é imprimir um desses casos possíveis;

        printf("existe\n");
    }

    return 0;

}