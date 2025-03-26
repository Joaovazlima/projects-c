#include <stdio.h>

typedef struct {
    char nome[30];
    double preco;
} Produto;

void bubble_sort(Produto p[], int n) {
    int i, j;
    Produto temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (p[j].preco > p[j + 1].preco) {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
}

void selection_sort(Produto p[], int n) {
    int i, j, min;
    Produto temp;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (p[j].preco < p[min].preco) {
                min = j;
            }
        }
        temp = p[min];
        p[min] = p[i];
        p[i] = temp;
    }
}

void imprimir(Produto p[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%s - R$ %.2f\n", p[i].nome, p[i].preco);
    }
    printf("\n");
}

int main() {
    int i, n;
    Produto produtos[] = {
        {"Teclado", 120.0}, {"Mouse", 50.0}, {"Monitor", 800.0},
        {"Notebook", 3500.0}, {"Fone", 90.0}, {"Cadeira", 950.0}
    };
    n = sizeof(produtos) / sizeof(produtos[0]);

    Produto p1[n], p2[n];
    for (i = 0; i < n; i++) {
        p1[i] = produtos[i];
        p2[i] = produtos[i];
    }

    bubble_sort(p1, n);
    printf("Ordenado com Bubble Sort:\n");
    imprimir(p1, n);

    selection_sort(p2, n);
    printf("Ordenado com Selection Sort:\n");
    imprimir(p2, n);

    return 0;
}

