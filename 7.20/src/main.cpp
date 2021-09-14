/*
    Escreva uma variação do algoritmo Quick Sort
    para ordenar uma lista de números considerando
    que a escolha do pivô é justamente o último elemento
    da lista que está sendo considerada em cada nó.
*/

#include <iostream>

using namespace std;
 
void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}

int part (int arr[], int start, int end){
    int pivot = arr[end];    
    int i = (start - 1);  
 
    for (int j = start; j <= end- 1; j++){
        
        if (arr[j] <= pivot){
            i++;    
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[end]);
    return (i + 1);
}
 
void quickSort(int arr[], int start, int end){
    if (start < end){
        int pi = part(arr, start, end);
        
        quickSort(arr, start, pi - 1);
        quickSort(arr, pi + 1, end);
    }
}
 
void printArray(int arr[], int size){
    int i;
    for (i=0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(int);
    quickSort(arr, 0, n-1);
    cout << "Sorted array: ";
    
    printArray(arr, n);
    return 0;
} 