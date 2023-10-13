public class KadanesAlgorithm {
    public static int maxSubArraySum(int[] nums) {
        int maxEndingHere = nums[0];
        int maxSoFar = nums[0];

        for (int i = 1; i < nums.length; i++) {
            maxEndingHere = Math.max(nums[i], maxEndingHere + nums[i]);
            maxSoFar = Math.max(maxSoFar, maxEndingHere);
        }

        return maxSoFar;
    }

    public static void main(String[] args) {
        int[] arr = {1,2,3,-2,5};
        int maxSum = maxSubArraySum(arr);
        System.out.println("Maximum subarray sum is: " + maxSum);
    }
}
