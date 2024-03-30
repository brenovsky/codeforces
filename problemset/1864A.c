#include <stdio.h>
#include <stdlib.h>

typedef struct lista {
    int info;
    struct lista* prox;
} TLista;

void criarLista(TLista* lista) {
    lista -> prox = NULL;
}

void inserirInicio(TLista* lista, int valor) {
    TLista* novo = (TLista*) malloc(sizeof(TLista));

    novo -> info = valor;
    novo -> prox = lista -> prox;

    lista -> prox = novo;
}

int calculoTriangular(int n) { //devolve o triangular da posição "n"

    int a = 0;
    int s = 0;

    for (int i = 0; i < n; i++) {
        a = a + 1;
        s += a;
    }
    return s;
}

void imprimirLista(TLista* lista) {
    TLista* p;

    for (p = lista -> prox; p != NULL; p = p -> prox) {
        printf("%d ", p -> info);
    }
    printf("\n");
}

void retornarCaso(TLista* lista, int x, int y, int n) {
    inserirInicio(lista, y);

    TLista* p = lista -> prox;
    int valor;


    for (int i = 1; i < n - 1; i++) {
        valor = p -> info - i; //contador da subtração cresce 1 em 1

        inserirInicio(lista, valor);

        p = lista -> prox; //ponteiro retorna para o inicio
    }

    inserirInicio(lista, x);

    imprimirLista(lista);
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {

        int x, y, n;
        int intervalo;

        TLista vetor;

        scanf("%d %d %d", &x, &y, &n);

        intervalo = y - x;

        criarLista(&vetor);

        if (intervalo < calculoTriangular(n-1)) {
            printf("-1\n");
        } else {
            retornarCaso(&vetor, x, y, n);
        }

    }
    return 0;
}