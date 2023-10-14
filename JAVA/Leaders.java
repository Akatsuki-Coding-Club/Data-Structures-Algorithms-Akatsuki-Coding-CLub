/**
 * Leaders
 */
class Leaders{
    //Function to find the leaders in the array.
    static ArrayList<Integer> leaders(int arr[], int n){
        ArrayList<Integer> ans = new ArrayList<Integer>();
        int lead = 0;
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i] >= lead){
                lead = arr[i];
                ans.add(arr[i]);
            }
        }
        Collections.sort(ans, Collections.reverseOrder());
        return ans;
    }
}