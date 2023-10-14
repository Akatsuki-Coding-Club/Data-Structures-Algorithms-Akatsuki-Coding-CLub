// File Name: Reverse_Integer.cpp

#include <iostream>
#include <climits>
using namespace std;

void rotateArr(int arr[], int D, int N) {
    D = D % N;
    int temp[D];

    
    for (int i = 0; i < D; i++) {
        temp[i] = arr[i];
    }

   
    for (int i = D; i < N; i++) {
        arr[i - D] = arr[i];
    }

    
    for (int i = N - D; i < N; i++) {
        arr[i] = temp[i - (N - D)];
    }
}

int main() {
    int N, D;
    cout << "Enter the size of the array = ";
    cin >> N;

    int arr[N];

    cout << "Enter the elements of the array =  ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number of rotations =  ";
    cin >> D;

    
    rotateArr(arr, D, N);

    cout << "New Rotated array: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
