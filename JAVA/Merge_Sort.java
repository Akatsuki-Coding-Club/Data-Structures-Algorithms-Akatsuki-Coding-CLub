//solution for merge sort

import java.util.*;

class Merge_Sort
{
    //method to print the elements of the array
	static void printArray(int arr[])
    {
        StringBuffer sb=new StringBuffer("");
        int n = arr.length;
        for (int i=0; i<n; ++i)
            sb.append(arr[i]+" ");
        System.out.println(sb.toString());
    }

    

	public static void main(String args[])
	{
	    //taking input using Scanner class
		Scanner sc = new Scanner(System.in);
		
		//taking testcases
		int T = sc.nextInt();
		while(T>0)
		{
		    //taking elements count
			int n = sc.nextInt();
			
			//creating an object of class Merge_Sort
			Merge_Sort ms = new Merge_Sort();
			
			//creating an array of size n
			int arr[] = new int[n];
			
			//adding elements to the array
			for(int i=0;i<n;i++)
				arr[i] = sc.nextInt();

            
			Solution g = new Solution();
			
			//calling the method mergeSort
			g.mergeSort(arr,0,arr.length-1);

            //calling the method printArray
			ms.printArray(arr);
		T--;
		}
	}
}



class Solution
{
    void merge(int arr[], int l, int m, int r)
    {
         int left=l;
         int right=m+1;
        ArrayList<Integer> nums=new ArrayList<>();
        
         while(left<=m&&right<=r){
             if(arr[left]<=arr[right]){
                 nums.add(arr[left]);
                 left++;
             }
             else{
                 nums.add(arr[right]);
                 right++;
             }
            
            
         }
         while(left<=m){
             nums.add(arr[left]);
             left++;
         }
         while(right<=r){
             nums.add(arr[right]);
             right++;
         }
         for(int j=l;j<=r;j++)arr[j]=nums.get(j-l);
    }
    void mergeSort(int arr[], int l, int r)
    {
        if(l==r)return;
        int m=(r+l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
        
    }
}
