def bubbleSort(arr):
    n = len(arr)
    for i in range(n):
        # Flag to optimize the algorithm by breaking early if no swaps are made
        swapped = False

        # Last i elements are already in place, so we don't need to check them
        for j in range(0, n - i - 1):
            # Swap if the element found is greater than the next element
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swapped = True

        # If no two elements were swapped in the inner loop, the array is already sorted
        if not swapped:
            break

# Example 1
arr1 = [4, 1, 3, 9, 7]
bubbleSort(arr1)
print("Sorted array (Example 1):", arr1)

# Example 2
arr2 = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
bubbleSort(arr2)
print("Sorted array (Example 2):", arr2)
