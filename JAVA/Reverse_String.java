public class ReverseString {
    public static String reverseString(String s) {
        char[] arr = s.toCharArray();
        int left = 0;
        int right = arr.length - 1;

        while (left < right) {
            char temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;

            left++;
            right--;
        }

        return new String(arr);
    }

    public static void main(String[] args) {
        String input = "Geeks";
        String obj = reverseString(input);
        System.out.println(obj); 
    }
}
