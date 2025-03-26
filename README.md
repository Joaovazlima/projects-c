=========================================================================================================================================================================================================
#include <stdio.h>
#include <stdlib.h>

void bubbleSort(double arr[], int n){
	int i, j, temp;
	
	for(i = 0; i < n - 1; i++){
		for(j = 0; j < n - i -1; j++){
			if(arr[j] < arr[j+1]){
				temp = arr[j];
				arr[j]= arr[j+1];
				arr[j+1]= temp;
			}
		}
	}
}

void insertionSort(double arr[], int n){
	int i, j;
	double key;
	
	for(i = 1; i < n; ++i){
		key = arr[i];
		j = i - 1;
		
		while(j >= 0 && arr[j] > key){
			arr[j + 1] = arr [j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

main (){
	double arr[] = { 6.0, 1.0, 10.0, 3.0, 7.0, 7.2, 7.8, 8.9, 1.7};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	bubbleSort(arr, n);
	int i;
	printf("as notas sao: ");
	for(i=0; i < n; i++){
		printf("%.1f/ ", arr[i]);
	}
	
	
	insertionSort(arr, n);
	printf("as notas sao:");
	for (i = 0; i < n; i++){
		printf("%.1f/ ", arr[1]);
    }
    return 0;
}	

============================================================================================================================================================================================================================

#include <stdio.h>

void bubbleSort(int arr[], int n){
  int i, j, temp;
  
  for(i=0; i < n-1; i++){
    for(j = 0; j < n - i -1; j++){
      if(arr[j] > arr[j+1]){
        temp=arr[j];
        arr[j] =arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
}

int main(){
  int arr[] = {43, 98, 100, 78, 3432, 23847, 448, 39283, 390, 20, 1, 29329, 384, 349, 354, 39470};
  int n = sizeof(arr) / sizeof(arr[0]);
  int i;
  
  bubbleSort(arr, n);
  
  for(i =0; i<n; i++){
    printf("%d ", arr[i]);
  }
return 0;
}

==========================================================================================================================================================================================================================

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble_sort(double arr[], int n) {
    int i, j, swapped;
    double temp;
    for (i = 0; i < n - 1; i++) {
        swapped = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) break;
    }
}

void insertion_sort(double arr[], int n) {
    int i, j;
    double key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

double measure_time(void (*sort_function)(double[], int), double arr[], int n) {
    clock_t start, end;
    double *copy;
    int i;
    copy = malloc(n * sizeof(double));
    for (i = 0; i < n; i++) copy[i] = arr[i];
    start = clock();
    sort_function(copy, n);
    end = clock();
    free(copy);
    return ((double)(end - start)) / CLOCKS_PER_SEC;
}

void generate_random_array(double arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        arr[i] = ((double)rand() / RAND_MAX) * 10.0;
    }
}

int main() {
    srand(time(NULL));
    int sizes[] = {10, 100, 1000};
    int i, size;
    double *data;
    for (i = 0; i < 3; i++) {
        size = sizes[i];
        data = malloc(size * sizeof(double));
        generate_random_array(data, size);

        printf("Tamanho do conjunto: %d\n", size);
        printf("Bubble Sort: %.6f segundos\n", measure_time(bubble_sort, data, size));
        printf("Insertion Sort: %.6f segundos\n\n", measure_time(insertion_sort, data, size));

        free(data);
    }
    return 0;
}

===================================================================================================================================================================================================================

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


========================================================================================================================================================================================================================

#include <stdio.h>

void selectionSort(int arr[], int n){
	int i, j, min_idx, temp;
		
	for(i = 0; i < n -1; i++){
		min_idx = i;
			
		for(j = i + 1; j < n; j++){
			if(arr[j] < arr[min_idx]){
				min_idx = j;
		
			}
		}
		temp = arr[i];
		arr[i] = arr[min_idx];
		arr[min_idx]= temp;
	}
}

int main () {
	int arr [] = {43, 98, 100, 78, 3432, 23847, 448, 39283, 390, 20, 1, 29329, 384, 349, 354, 39470};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	
	selectionSort(arr, n);
	int i;
	
	for(i = 0; i < n; i ++){
		printf("%d ", arr[i]);
		
	}
	
	return 0;
}

===================================================================================================================================================================================================================================

