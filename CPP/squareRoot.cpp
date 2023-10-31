#include<iostream>
using namespace std;

int integerSqrt(int x){
    if(x==0)
            return 0;
    
        int s = 1;
        int e = x;
        int ans = -1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(mid > x/mid){
                e = mid-1;
            }else{
                ans = mid;
                s = mid+1;
            }
        }
        return ans;
}

double doubleSqrt(int x, int integerSqrt, int precision){
    double factor = 1;
    double ans = integerSqrt;

    for(int i=0; i<precision; i++){

        factor = factor/10;
        for(double j=ans; j*j<x; j+=factor){
            ans = j;
        }
    }

    return ans;
}

int main(){
    cout<<"Enter  Number: ";
    int n;
    cin>>n;

    int temp = integerSqrt(n);

    cout<<"Square Root: "<< doubleSqrt(n, temp, 3) << endl;
    return 0;
}