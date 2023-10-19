import java.util.*;

class Anagram {
    public static void main(String[] args) {

        // Take an input scanner using Scanner instance
        Scanner sc = new Scanner(System.in);

        // Take two strings as input
        String a = sc.nextLine();
        String b = sc.nextLine();

        // Covert two strings to array of characters
        char[] arr1 = a.toCharArray();
        char[] arr2 = b.toCharArray();

        // Sort those characters using sort method provided by the Arrays constructor
        Arrays.sort(arr1);
        Arrays.sort(arr2);

        // Conditionally print output checking those sorted strings are equal or not
        if (Arrays.equals(arr1, arr2))
            System.out.print("YES");
        else
            System.out.print("NO");
    }
}