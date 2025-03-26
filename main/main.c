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
