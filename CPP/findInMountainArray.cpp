// 1095. Find In Mountain Array (Hard)

/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:

    int findPeak(MountainArray &mountainArr){
        int s = 0;
        int e = mountainArr.length()-1;
        int mid;
        
        while(s<e){
            mid = s+(e-s)/2;
            if(mountainArr.get(mid) < mountainArr.get(mid+1)){
                s = mid+1;
            }else{
                e = mid;
            }
        }

        return mid;
    }

    int leftMostInIncreasing(MountainArray &mountainArr, int start, int end, int target){
        int s = start;
        int e = end;
        int ans = -1;

        while(s<=e){
            int mid = s+(e-s)/2;
            int midElement = mountainArr.get(mid);
            if(midElement == target){
                ans = mid;
                e = mid-1;
            }else if(target > midElement){
                s = mid+1;
            }else{
                e = mid-1;
            }
        }

        return ans;
    }

    int leftMostInDecreasing(MountainArray &mountainArr, int start, int end, int target){
        int s = start;
        int e = end;
        int ans = -1;

        while(s<=e){
            int mid = s+(e-s)/2;
            int midElement = mountainArr.get(mid);
            if(midElement == target){
                ans = mid;
                e = mid-1;
            }else if(target > midElement){
                e = mid-1;
            }else{
                s = mid+1;
            }
        }

        return ans;
    }

    int findInMountainArray(int target, MountainArray &mountainArr) {
        int e = mountainArr.length();

        if(e==3){
            for(int i=0; i<e; i++){
                if(mountainArr.get(i)==target){
                    return i;
                }
            }
            return -1;
        }

        int peakIndex = findPeak(mountainArr);
        int firstPart = leftMostInIncreasing(mountainArr, 0, peakIndex, target);
        int secondPart = leftMostInDecreasing(mountainArr, peakIndex+1, e-1, target);


        if(!(firstPart==-1) && !(secondPart==-1)){
            return min(firstPart, secondPart);
        }

        return max(firstPart, secondPart);
    }
};