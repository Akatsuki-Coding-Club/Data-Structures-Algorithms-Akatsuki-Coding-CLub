import java.util.Scanner;

class Solution {
    public static int trap(int[] height) {
        int n = height.length;
        int res = 0;
        int[] lmax = new int [n];
        int[] rmax = new int [n];
       lmax[0]=height[0];
       for(int i = 1;i<n;i++){
           lmax[i]=Math.max(height[i],lmax[i-1]);
       }

       rmax[n-1]=height[n-1];
       for(int i=n-2;i>=0;i--){
           rmax[i]=Math.max(height[i],rmax[i+1]);
       }

       for(int i =1;i<n-1;i++){
           res = res+(Math.min(lmax[i],rmax[i])-height[i]);
       }
        return res;
    }
}
public class TrappingRainWater {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number of elements: ");
        int n = sc.nextInt();

        int[] height = new int[n];
        System.out.println("Enter the elements of the array:");
        for (int i = 0; i < n; i++) {
            height[i] = sc.nextInt();
        }

        Solution solution = new Solution();
        int trappedWater = solution.trap(height);

        System.out.println("The amount of trapped rainwater is: " + trappedWater);

        sc.close();
    }
}
