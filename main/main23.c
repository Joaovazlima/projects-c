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

