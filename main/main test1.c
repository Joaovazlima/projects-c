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
