import java.util.*;

class Selection_Sort
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0)
		{
			int n = sc.nextInt();
			int arr[] = new int[n]; 
			for(int i=0;i<n;i++)
			{
				arr[i] = sc.nextInt();
			}
		
			Solution obj = new Solution();
			obj.selectionSort(arr, n);
			
			for(int i=0;i<n;i++)
		    	System.out.print(arr[i]+" ");
		    System.out.println();
			t--;
		}
		
	}
}





class Solution
{
	int  select(int arr[], int i)
	{
        // code here such that selectionSort() sorts arr[]
        int n=arr.length;
         int mid_indx=i;
	   
	       for(int j=i+1;j<n;j++)
	       {
	           if(arr[j]<arr[mid_indx])
	           {
	               mid_indx=j;
	           }
	       }
	   
        return mid_indx;
	}
	
	void selectionSort(int arr[], int n)
	{
	
	           for(int i=0;i<n-1;i++)
	           
	           {
	            
	               int mid_indx = select(arr, i);
	               int temp=arr[mid_indx];
	               arr[mid_indx]=arr[i];
	               arr[i]=temp;
	           
	           }
	           
	       
	   
	    return;
	}
}
