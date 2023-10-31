#include<iostream>
#include<vector>
using namespace std;

//Lettcode - 75. Sort Colors

void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size()-1;

        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }else if(nums[mid]==1){
                mid++;
            }else{
                swap(nums[high], nums[mid]);
                high--;
            }
        }
    }

    int main()
    {
        vector<int> arr = {2,0,2,1,1,0};
        sortColors(arr);
        
        for(auto li:arr)
        {
            cout << li << " ";
        }
        return 0;
    }

    //Output
    // 0 0 1 1 2 2 