#include <iostream>
#include <vector>

std::vector<int> AllPrimeFactors(int N) {
    std::vector<int> factors;
    int prime = 0;
    for (int i = 2; i * i <= N; i++) {
        while (N % i == 0) {
            if (i != prime)
                factors.push_back(i);
            N /= i;
            prime = i;
        }
    }
    if (N > 1) {
        factors.push_back(N);
    }
    return factors;
}

int main() {
    int N;
    std::cout << "Enter a number N: ";
    std::cin >> N;

    std::vector<int> factors = AllPrimeFactors(N);

    if (factors.size() == 0) {
        std::cout << "No prime factors found." << std::endl;
    } else {
        std::cout << "All prime factors of " << N << ": ";
        for (int factor : factors) {
            std::cout << factor << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
