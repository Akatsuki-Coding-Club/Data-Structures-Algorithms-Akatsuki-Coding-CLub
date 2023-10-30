#include <iostream>
#include <vector>
using namespace std;

// Leetcode - 189. Rotate Array
void rotate(vector<int> &arr, int k)
{
    int n = arr.size();
    vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        int newIndex = (i + k) % n;
        num[newIndex] = arr[i];
    }
    arr = num;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    rotate(arr, k);

    for (auto li : arr)
    {
        cout << li << " ";
    }
    return 0;
}

//Output
// 5 6 7 1 2 3 4 