# Linear Search & Binary Search

Linear Search is a simple search algorithm that sequentially checks each element of an array to see if it matches a given target value. The algorithm works by starting at the beginning of the array and comparing each element with the target value until a match is found or the end of the array is reached. If the target value is found, the algorithm returns the index of the element in the array. If the target value is not found, the algorithm returns a special value indicating that the target value is not present in the array.

The time complexity of linear search is O(n), where n is the size of the array. This is because in the worst case, the algorithm must compare the target value with every element in the array before determining that the target value is not present. However, in the best case, the target value is found at the first index, resulting in a time complexity of O(1).

Linear search is typically used for small arrays or for unsorted arrays where other algorithms like binary search cannot be used.

Binary search is a search algorithm that works by repeatedly dividing the search interval in half until the target value is found or determined to be not present in the array. This algorithm is based on the principle of divide and conquer and is highly efficient for large sorted arrays.

The time complexity of binary search is O(log n), where n is the size of the array. This is because each comparison reduces the search interval by half, resulting in a highly efficient search algorithm. However, binary search requires that the array is sorted before searching, which can add an extra O(n log n) complexity if the array is unsorted.

Binary search is typically used for large sorted arrays, where it is highly efficient and can provide significant performance gains over linear search