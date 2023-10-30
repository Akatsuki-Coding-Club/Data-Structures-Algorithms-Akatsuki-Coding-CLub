def insertion_sort(arr):
    for i in range(1, len(arr)):
        # The current element to be compared
        current_element = arr[i]
        j = i - 1

        # Move elements of arr[0..i-1] that are greater than current_element
        # to one position ahead of their current position
        while j >= 0 and current_element < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1

        # Place the current element in its correct position
        arr[j + 1] = current_element

# Example usage:
my_list = [12, 11, 13, 5, 6]
insertion_sort(my_list)
print("Sorted array is:", my_list)
