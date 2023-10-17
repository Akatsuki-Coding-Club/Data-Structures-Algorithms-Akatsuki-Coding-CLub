import java.util.Scanner;

/**
 * Palindrome
 */
public class Palindrome {

    //Function to check palindrome number
    public static boolean palindrome(int num){
        int rev = 0, rem;
        int org = num;  // It stores the given number for future use.
        while(num > 0){
            rem = num % 10;
            rev = rev * 10 + rem;
            num /= 10;
        }
        if(rev == org) return true;
        return false;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        System.out.println("Enter a number to check palindrome? : ");
        int n = sc.nextInt();
        if(palindrome(n)) {
            System.out.println("Given number is palindrome number");
        } 
        else {
            System.out.println("Given number is not a palindrome number");
        }
    }
}