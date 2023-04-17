# Bubble Sort & Selection Sort

Bubble Sort is a simple sorting algorithm that repeatedly steps through the list to be sorted, compares each pair of adjacent elements and swaps them if they are in the wrong order. The algorithm gets its name from the way smaller elements "bubble" to the top of the list.

Bubble Sort has a worst-case and average complexity of O(n^2), where n is the number of elements in the list. This makes Bubble Sort inefficient for large lists and real-world applications.The best case time complexity is O(n), which occurs when the array is already sorted.

Selection sort is a simple and intuitive sorting algorithm that works by repeatedly finding the smallest element from an unsorted array and moving it to the beginning. The process is then repeated with the remaining elements until the entire array is sorted.

The time complexity of selection sort is O(n^2), where n is the number of elements in the array. The best case scenario is when the array is already sorted, which takes O(n^2) time because it still has to compare each element with the rest of the elements in the array. The worst case scenario is when the array is sorted in reverse order, which also takes O(n^2) time because it requires maximum swaps to place the elements in their correct position. Therefore, selection sort is not a very efficient sorting algorithm for large arrays, but it can be useful for small arrays or for sorting partially sorted arrays.