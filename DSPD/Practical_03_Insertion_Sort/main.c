#include <stdio.h>
#include <stdlib.h>

int compare_function(int a, int b) {
    return a - b;
}

void swap(int *a, int *b) {
    int _t = *a;
    *a = *b;
    *b = _t;
}

void insertion_sort(int arr[], int size, int (*cmp)(int, int)) {
    int key, j;
    for (int i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && cmp(arr[j], key) > 0) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main(int argc, char *argv) {
    int arr[15] = {5, 2, 4, 6, 1, 3, 2, 6, 5, 4, 3, 2, 9, 8, 7};
    printf("     UNSORTED: ");
    for (int i = 0; i < 15; i++) {
        printf("%d\t", arr[i]);
    }
    insertion_sort(arr, 15, compare_function);
    printf("\nINSERTIONSORT: ");
    for (int i = 0; i < 15; i++) {
        printf("%d\t", arr[i]);
    }
    return 0;
}