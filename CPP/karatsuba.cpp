#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int binaryToDecimal(string binary) {
    int decimal = 0;
    int n = binary.length();
  
    for(int i = 0; i < n; i++) {
        if(binary[i] == '1') {
            decimal += pow(2, n - 1 - i);
        }
    }
  
    return decimal;
}

string decimalToBinary(int decimal) {
    string binary = "";
  
    while(decimal > 0) {
        binary = to_string(decimal % 2) + binary;
        decimal /= 2;
    }
  
    return binary;
}

int karatsubaAlgo(string A, string B) {
    int num1 = binaryToDecimal(A);
    int num2 = binaryToDecimal(B);
  
    int product = num1 * num2;
  
    return product;
}