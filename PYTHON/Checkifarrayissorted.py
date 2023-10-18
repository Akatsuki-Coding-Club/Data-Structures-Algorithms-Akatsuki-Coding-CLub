def is_sorted(arr):
    """
    Function to check if the given array is sorted.
    
    Parameters:
    arr (list): The input list to be checked.
    
    Returns:
    bool: True if the array is sorted, False otherwise.
    """
    # Check if the array is empty or has only one element
    if len(arr) <= 1:
        return True
    
    # Iterate through the array to check if each element is less than or equal to the next element
    for i in range(len(arr) - 1):
        if arr[i] > arr[i + 1]:
            # If current element is greater than the next, the array is not sorted
            return False
    
    # If the loop completes without returning False, the array is sorted
    return True

# Example usage
input_array = [1, 2, 3, 4, 5]
if is_sorted(input_array):
    print("The array is sorted.")
else:
    print("The array is not sorted.")
