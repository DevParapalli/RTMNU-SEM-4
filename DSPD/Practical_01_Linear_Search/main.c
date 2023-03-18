#include <stdio.h>

void linear_search(int arr[], int size, int indexes[], int *index_size, int elem)
{
    int i;
    *index_size = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == elem)
        {
            indexes[*index_size] = i;
            (*index_size)++;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 5, 9, 14, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int indexes[size];
    int index_size;
    int elem = 5;
    linear_search(arr, size, indexes, &index_size, elem);
    printf("The number of occurences of %d is %d\n", elem, index_size);
    printf("Element %d found at indexes: ", elem);
    for (int i = 0; i < index_size; i++)
    {
        printf("%d ", indexes[i]);
    }
    return 0;
}

/*
The number of occurences of 5 is 2
Element 5 found at indexes: 4 10 
*/