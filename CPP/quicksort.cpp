#include <iostream>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[low]; // Choose the first element as the pivot
    int left = low + 1;
    int right = high;

    while (true) {
        while (left <= right && arr[left] <= pivot) {
            left++;
        }
        while (left <= right && arr[right] > pivot) {
            right--;
        }
        if (left <= right) {
            swap(arr[left], arr[right]);
        } else {
            break;
        }
    }

    // Swap the pivot element with the element at the right pointer
    swap(arr[low], arr[right);

    return right;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    int myArray[] = {3, 6, 8, 10, 1, 2, 1};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    quickSort(myArray, 0, size - 1);

    for (int i = 0; i < size; i++) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
