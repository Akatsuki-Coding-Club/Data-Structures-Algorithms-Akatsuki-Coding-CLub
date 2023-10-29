#include<bits/stdc++.h>
using namespace std;
int binaryToDecimal(string binary) {
    int decimal = 0;
    int base = 1;
    int n = binary.length();

    for (int i = n - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += base;
        }
        base *= 2;
    }

    return decimal;
}
int main(){
    string A , B ;
    cin>> A >> B ;
    int a=binaryToDecimal(A);
    int b=binaryToDecimal(B);

    cout<<a*b<<'\n';
}
