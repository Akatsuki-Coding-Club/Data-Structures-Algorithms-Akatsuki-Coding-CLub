#include <iostream>

int gcd(int A, int B) {
    while (B != 0) {
        int temp = B;
        B = A % B;
        A = temp;
    }
    return A;
}

int main() {
    int A,B;
    std::cout<<"Enter the Num 1 = ";
    std::cin>>A;
    std::cout<<"Enter the Num2 = ";
    std::cin>>B;
    int result = gcd(A, B);
    std::cout << "GCD of " << A << " and " << B << " is " << result << std::endl;
    return 0;
}
