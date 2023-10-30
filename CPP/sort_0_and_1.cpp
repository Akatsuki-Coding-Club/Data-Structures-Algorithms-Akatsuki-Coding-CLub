// sort_0_and_1.cpp

#include <iostream>
using namespace std;

int sort(int arr[], int n)
{
    int zero = 0;
    int one = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zero += 1;
        }
        else
        {
            one += 1;
        }
    }
    for(int i=0;i<zero;i++)
    {
        arr[i] = 0;
    }

    for(int j=zero;j<n;j++)
    {
        arr[j] = 1;
    }
    
}

int main()
{
    int n = 14;
    int arr[] = {0,1,1,0,0,1,0,1,0,1,1,0,0,0};
    sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}

//OUTPUT
//0 0 0 0 0 0 0 0 1 1 1 1 1 1 