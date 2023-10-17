 
class CkeckSortedArray {
    
    public static int arraySortedOrNot(int arr[], int n)
    {
        // Array has one or no element or the
        if (n == 1 || n == 0)
            return 1;
 
        // Unsorted pair found (Equal values allowed)
        if (arr[n - 1] < arr[n - 2])
            return 0;

        return arraySortedOrNot(arr, n - 1);
    }
 
    // main function
    public static void main(String[] args)
    {
        int arr[] = { 20, 23, 23, 45, 78, 88 };
        int n = arr.length;
        if (arraySortedOrNot(arr, n) != 0)
            System.out.println("Yes");
        else
            System.out.println("No");
    }
}