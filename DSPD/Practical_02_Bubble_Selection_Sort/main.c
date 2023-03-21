#include <stdio.h>
#include <stdlib.h>
#define SIZE 15


int compare_function(int a, int b) {
    return a-b;
}

void swap(int *a, int *b) {
    int _t = *a;
    *a = *b;
    *b = _t;
}

void bubble_sort(int arr[], int size, int (*cmp)(int, int)) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (cmp(arr[j], arr[j + 1]) > 0) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void selection_sort(int arr[], int size, int (*cmp)(int, int)) {
    for (int i = 0; i < size; i++) {
        int min = i;
        for (int j = i + 1; j < size; j++) {
            if (cmp(arr[j], arr[min]) < 0) {
                min = j;
            }
        }
        swap(&arr[i], &arr[min]);
    }
}

int main() {
    srand(69420);
    int arrA[SIZE];
    int arrB[SIZE];
    for (int i = 0; i < SIZE; i++) {
        arrA[i] = rand() % 100;
        arrB[i] = arrA[i];
    }
    printf("     UNSORTED: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d\t", arrA[i]);
    }
    printf("\n   BUBBLESORT: ");
    bubble_sort(arrA, SIZE, compare_function);
    for (int i = 0; i < SIZE; i++) {
        printf("%d\t", arrA[i]);
    }
    printf("\nSELECTIONSORT: ");
    selection_sort(arrB, SIZE, compare_function);
    for (int i = 0; i < SIZE; i++) {
        printf("%d\t", arrB[i]);
    }
    return 0;
}