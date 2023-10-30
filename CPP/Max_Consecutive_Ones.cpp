//Leetcode:- 485. Max Consecutive Ones
#include<iostream>
using namespace std;


 int findMaxConsecutiveOnes(int nums[],int n) {
        int one=0,temp=0;
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                temp +=1;
            }
            else
            {
                temp =0;
            }
            if(one<temp)
            {
                one +=1;
            }
        }
        return one;
    }

int main()
{
    int arr[] = {1,1,0,1,1,1};
    int n = 6;
    int ans = findMaxConsecutiveOnes(arr,n);
    cout << "Max Consecutive Ones is : " << ans ;
}

//Output
//Max Consecutive Ones is : 3