#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

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

void binary_search(int arr[], int size, int elem, int indexes[], int* index_size) {
    *index_size = 0;
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == elem) {
            indexes[*index_size] = mid;
            (*index_size)++;
            // Element found, checking for more occurrences.
            int i = mid + 1;
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
            return;  // found target at index mid
        } else if (arr[mid] < elem) {
            low = mid + 1;  // target is in the upper half
        } else {
            high = mid - 1;  // target is in the lower half
        }
    }
    return;  // target not found
}

int compare_function(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main(int argc, char* argv[]) {
    srand(69420);  // LULZ
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % SIZE;
    }

    int indexes[SIZE];
    int index_size;

    printf("A random array of size %d is generated.\n", SIZE);

    printf("Enter the element you want to search for: ");
    int elem;
    scanf("%d", &elem);

    linear_search(arr, SIZE, indexes, &index_size, elem);
    printf("Linear Search: The element %d occurs %d times at indexes: ", elem, index_size);
    for (int i = 0; i < index_size; i++) {
        printf("%d ", indexes[i]);
    }
    printf("\n");

    printf("Sorting the array using stdlib::qsort\n");
    qsort(arr, SIZE, sizeof(int), compare_function);

    binary_search(arr, SIZE, elem, indexes, &index_size);
    printf("Binary Search: The element %d occurs %d times at indexes: ", elem, index_size);
    for (int i = 0; i < index_size; i++) {
        printf("%d ", indexes[i]);
    }
    return 0;
}

/*
Enter the element you want to search for: 12
Linear Search: The element 12 occurs 2 times at indexes: 69 92
Sorting the array using stdlib::qsort
Binary Search: The element 12 occurs 2 times at indexes: 15 16
*/