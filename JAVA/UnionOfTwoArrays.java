import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class ArrayUnion {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter the size of the first array (n): ");
        int n = scanner.nextInt();
        int[] arr1 = new int[n];
        System.out.print("Enter the elements of the first array: ");
        for (int i = 0; i < n; i++) {
            arr1[i] = scanner.nextInt();
        }
        
        System.out.print("Enter the size of the second array (m): ");
        int m = scanner.nextInt();
        int[] arr2 = new int[m];
        System.out.print("Enter the elements of the second array: ");
        for (int i = 0; i < m; i++) {
            arr2[i] = scanner.nextInt();
        }
        
        findUnion(arr1, arr2);
    }
    
    public static void findUnion(int[] arr1, int[] arr2) {
        Set<Integer> union = new HashSet<>();
        
        int i = 0;
        int j = 0;
        
        while (i < arr1.length && j < arr2.length) {
            if (arr1[i] < arr2[j]) {
                union.add(arr1[i]);
                i++;
            } else if (arr1[i] > arr2[j]) {
                union.add(arr2[j]);
                j++;
            } else {
                union.add(arr1[i]);
                i++;
                j++;
            }
        }
        
        while (i < arr1.length) {
            union.add(arr1[i]);
            i++;
        }
        
        while (j < arr2.length) {
            union.add(arr2[j]);
            j++;
        }
        
        System.out.print("Union of the two arrays: ");
        for (int num : union) {
            System.out.print(num + " ");
        }
    }
}
