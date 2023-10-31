import java.util.Scanner;

public class Valid_palindrome {
    public static boolean isPalindrome(int x) {
        if(x<0 ||(x % 10 == 0 && x != 0)) return false;
        int reversedhalf = 0;
        while(x > reversedhalf){
            reversedhalf = reversedhalf * 10 + x % 10;
            x /= 10; }
        return (x == reversedhalf || x == reversedhalf / 10) ? true : false;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Integer: ");
        int num = sc.nextInt();
        boolean ans = isPalindrome(num);
        System.out.println(ans);
    }
}
