import java.util.Arrays;
import java.util.Scanner;

public class MultiDiArr {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // Arrays of arrays
        /*
         * 1 2 3
         * 4 5 6
         * 7 8 9
         */
        // int [][]arr=new int[3][]; //Adding number of rows is mandatory but the adding
        // colums is not mandatroy

        /*
         * int [][] arr={
         * {1,2,3},
         * {4,5,6},
         * {7,8,9}
         * };
         */
        /*
         * int [][]num=new [3][4];
         * System.out.println(num.length);//number of rows
         * 
         * int[][] nums = {
         * { 1, 2, 3 },//0 index
         * { 4, 5, 6 },//1 index
         * { 7, 8, 9 }//2 index-> nums[2]={7,8,9}
         * };
         */
        int[][] arr2D = new int[3][3];
        // input
        for (int i = 0; i < arr2D.length; i++) {
            for (int j = 0; j < arr2D.length; j++) {
                arr2D[i][j] = sc.nextInt();
            }
        }

        // output
        for (int i = 0; i < arr2D.length; i++) {
            for (int j = 0; j < arr2D.length; j++) {
                System.out.print(arr2D[i][j] + " ");
            }
            System.out.println();
        }

        sc.close();
    }
}
