#include <iostream>
#include <vector>

using namespace std;

vector<int> generateFibonacci(int N) {
    vector<int> result(N);

    if (N >= 1) {
        result[0] = 1;
    }
    if (N >= 2) {
        result[1] = 1;
    }

    for (int i = 2; i < N; i++) {
        result[i] = result[i - 1] + result[i - 2];
    }

    return result;
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    vector<int> fibonacciNumbers = generateFibonacci(N);

    cout << "The first " << N << " Fibonacci numbers are: ";
    for (int i = 0; i < N; i++) {
        cout << fibonacciNumbers[i] << " ";
    }
    cout << endl;

    return 0;
}
