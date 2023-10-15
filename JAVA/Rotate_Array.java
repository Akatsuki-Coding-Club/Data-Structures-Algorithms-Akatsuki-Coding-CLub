public class ArrayRotation {

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5};
        int D = 2;
        int N = arr.length;

        rotateArr(arr, D, N);

        for (int i = 0; i < N; i++) {
            System.out.print(arr[i] + " ");
        }
    }

    public static void rotateArr(int[] arr, int D, int N) {
        reverse(arr, 0, D - 1);
        reverse(arr, D, N - 1);
        reverse(arr, 0, N - 1);
    }

    public static void reverse(int[] arr, int start, int end) {
        while (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
}
