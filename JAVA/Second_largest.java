import java.util.Scanner;

class Second_largest {
     static int print2largest(int arr[], int n) {
        
        int max1 = 0;
        int max2 = -1;
        
        for(int i = 0; i < n; i++) {
            if(arr[i] > max1) {
                max2 = max1;
                max1 = arr[i];
            }
            else if(arr[i] > max2 && arr[i] < max1) {
                max2 = arr[i];
            }
        }
        
        return (max2 == 0 ? -1 : max2);
    }
   public static void main(String[] args) {
        // Create a Scanner object for input
        Scanner scanner = new Scanner(System.in);

        // Prompt the user for the array size
        System.out.print("Enter the size of the array: ");
        int size = scanner.nextInt();

        // Create an array of the specified size
        int[] arr = new int[size];

        // Prompt the user to enter values for the array
        System.out.println("Enter " + size + " values for the array:");

        for (int i = 0; i < size; i++) {
            System.out.print("Enter element " + (i + 1) + ": ");
            arr[i] = scanner.nextInt();
        }
       int ans=print2largest(arr,size);
        // Close the scanner to release resources
        scanner.close();

        
    }
}






 
