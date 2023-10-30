#include<iostream>
using namespace std;

void rotate(int arr[], int n)
{
    int temp = arr[n-1];
    for(int i=n-1;i>0;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}

int main()
{
    int n=5;
    int arr[] = {1,2,3,4,5};
    rotate(arr,n);
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}

//OUTPUT
//5 1 2 3 4 