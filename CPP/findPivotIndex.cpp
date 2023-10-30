// 724. Find Pivot Index (Easy)

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        int leftSum=0;
        int rightSum=0;
        for(int i: nums){
            sum+=i;
        }

        for(int i=0; i<nums.size(); i++){
            rightSum = sum - nums[i] - leftSum;

            if(leftSum==rightSum){
                return i;
            }

            leftSum+=nums[i];
        }

        return -1;
    }
};