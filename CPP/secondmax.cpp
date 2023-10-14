/*
Given an array Arr of size N, print second largest distinct element from an array.


Example 1:

Input: 
N = 6
Arr[] = {12, 35, 1, 10, 34, 1}
Output: 34
Explanation: The largest element of the 
array is 35 and the second largest element
is 34.


*/
#include<iostream>
#include<vector>
using namespace std;

int main(){
  int max=0,secondmax=0,n,b;
  vector<int> arr;
  
  cout<<"Enter the no. of elements: ";
    cin>>n;

    cout<<"Enter the elements: ";
  for(int i=0;i<n;i++){
    cin>>b;
    arr.push_back(b);
  }
    

  //This loop will find the max value in list 
  for(int i=0;i<5;i++){
    if(arr[i]>max)
      max=arr[i];
  }
  

  //This loop will find the second max value in list 
  for(int i=0;i<5;i++){
    if(max!=arr[i]){
      if(arr[i]>secondmax)
	secondmax=arr[i];
    }
  }

  cout<<secondmax<<endl;

  
  return 0;
}
