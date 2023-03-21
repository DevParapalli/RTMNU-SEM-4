#include <stdio.h>
#include <stdlib.h>

void linear_search(int arr[], int size, int indexes[], int* index_size, int elem) {
    int i;
    *index_size = 0;
    for (i = 0; i < size; i++) {
        if (arr[i] == elem) {
            indexes[*index_size] = i;
            (*index_size)++;
        }
    }
}

int binary_search(int arr[], int size, int elem, int indexes[], int* index_size) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == elem) {
            // Element found, checking for more occurrences.
            int i = mid;
            while (arr[i] == elem) {
                indexes[*index_size] = i;
                (*index_size)++;
                i++;
            }
            i = mid - 1;
            while (arr[i] == elem) {
                indexes[*index_size] = i;
                (*index_size)++;
                i--;
            }
            return mid;  // found target at index mid
        } else if (arr[mid] < elem) {
            low = mid + 1;  // target is in the upper half
        } else {
            high = mid - 1;  // target is in the lower half
        }
    }
    return -1;  // target not found
}

int compare_func(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 5, 9, 14, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int indexes[size];
    int index_size;
    int elem = 5;
    printf("\nArray: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    linear_search(arr, size, indexes, &index_size, elem);
    printf("Linear Search :The number of occurrences of %d is %d\n", elem, index_size);
    printf("Linear Search : Element %d found at indexes: ", elem);
    for (int i = 0; i < index_size; i++) {
        printf("%d ", indexes[i]);
    }
    // RESETTING
    index_size = 0;
    for (int i = 0; i < size; i++) {
        indexes[i] = 0;
    }

    qsort(arr, size, sizeof(int), compare_func);

    printf("\nArray After Sorting: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    int index = binary_search(arr, size, elem, indexes, &index_size);

    


    printf("\nBinary Search :The number of occurrences of %d is %d\n", elem, index_size);
    printf("Binary Search : Element %d found at indexes: ", elem);
    for (int i = 0; i < index_size; i++) {
        printf("%d ", indexes[i]);
    }
    printf("\n");
    return 0;
}

/*
The number of occurences of 5 is 2
Element 5 found at indexes: 4 10
*/