package karatsubaalgorithm;
import java.math.*;
import java.util.Scanner;

public class Karatsuba {
	public static BigInteger binaryToDecimal(String binary) {
        return new BigInteger(binary, 2);
    }
    // Convert decimal BigInteger to binary string
    public static String decimalToBinary(BigInteger decimal) {
        return decimal.toString(2);
    }
    // Karatsuba multiplication algorithm
    public static BigInteger karatsubaMultiply(BigInteger x, BigInteger y) {
        int n = Math.max(x.bitLength(), y.bitLength());
        if (n <= 3) {
            return x.multiply(y);
        }
        int m = (n + 1) / 2;
        // Split x and y into high and low parts
        BigInteger xHigh = x.shiftRight(m);
        BigInteger xLow = x.subtract(xHigh.shiftLeft(m));
        BigInteger yHigh = y.shiftRight(m);
        BigInteger yLow = y.subtract(yHigh.shiftLeft(m));
        // Recursively compute sub-products
        BigInteger a = karatsubaMultiply(xHigh, yHigh);
        BigInteger b = karatsubaMultiply(xLow, yLow);
        BigInteger c = karatsubaMultiply(xHigh.add(xLow), yHigh.add(yLow)).subtract(a).subtract(b);
        // Combine sub-products to get the final result
        return a.shiftLeft(2 * m).add(c.shiftLeft(m)).add(b);
    }
	public static void main(String[] args) {
		// TODO Auto-generated method stub
			Scanner sc = new Scanner(System.in);
			System.out.println("Enter first string: ");
		 	String A = sc.nextLine();
		 	System.out.println("Enter second string: ");
	      	String B = sc.nextLine();
	      	
	        // Convert binary strings to decimal integers
	        BigInteger decimalA = binaryToDecimal(A);
	        BigInteger decimalB = binaryToDecimal(B);
	        
	        // Multiply using Karatsuba
	        BigInteger product = karatsubaMultiply(decimalA, decimalB);
	        // Convert the result back to a binary string
	        String binaryResult = decimalToBinary(product);
	        System.out.println("Product in Decimal Value: " + product);
	        System.out.println("Product in Binary: " + binaryResult);
	}
}
