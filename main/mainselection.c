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
