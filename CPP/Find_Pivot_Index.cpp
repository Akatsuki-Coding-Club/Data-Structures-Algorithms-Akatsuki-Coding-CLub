// leetcode:- 724. Find Pivot Index

#include<iostream>
using namespace std;

int find_pivote(int arr[],int n)
{
     int left=0,right=0,count=0;
     int totalsum=0;

    for(int i=0;i<n;i++)
    {
     totalsum += arr[i];   
    }

    for(int i=0;i<n;i++)
    {
        totalsum -= arr[i];
        
        if(left == totalsum)
        {
            return i;
        }
        left += arr[i];

    }
 
    return -1;


}

int main()
{
    int arr[] = {1,7,3,6,5,6};
    int n = 6;

    int ans = find_pivote(arr,n);
   cout << "pivote index is: " << ans;
}