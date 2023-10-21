import java.util.Scanner;

public class Number_Of_1_Bits {
    static int setBits(int N) {
        int setBits = 0;

        while (N > 0) {
            N = N & (N - 1);
            setBits++;
        }

        return setBits;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number ");
        int n = sc.nextInt();
        int ans = setBits(n);
        System.out.println("Count of set bits: " + ans);
        sc.close();
    }
    
}