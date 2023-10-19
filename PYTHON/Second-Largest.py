def findSecondLargestDistinct(arr):
    largest = float('-inf')
    secondLargest = float('-inf')

    for num in arr:
        if num > largest:
            secondLargest = largest
            largest = num
        elif num < largest and num > secondLargest:
            secondLargest = num

    return secondLargest

arr = [12, 35, 1, 10, 34, 1] #sample input
result = findSecondLargestDistinct(arr)
print(result)
