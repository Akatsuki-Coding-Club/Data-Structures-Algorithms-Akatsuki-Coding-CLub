def insert(arr, i):
    key = arr[i]
    j = i - 1
    while j >= 0 and key < arr[j]:
        arr[j + 1] = arr[j]
        j -= 1
    arr[j + 1] = key

def insertionSort(arr):
    n = len(arr)
    for i in range(1, n):
        insert(arr, i)

# Example 1
arr1 = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
insertionSort(arr1)
print("Sorted array (Example 1):", arr1)

# Example 2
arr2 = [4, 1, 3, 9, 7]
insertionSort(arr2)
print("Sorted array (Example 2):", arr2)
