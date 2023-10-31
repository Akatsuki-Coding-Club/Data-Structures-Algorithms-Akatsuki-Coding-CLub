public class reverseString {
    public static String reverse(String str) {
        // converting str to char array for easy traversal
        char[] chars = str.toCharArray();
        //pointing one pointer to left
        int left = 0;
        //pointing another pointer to right
        int right = chars.length - 1;
        // moving till left and right not crosses each other
        while (left < right) {
            // swaping of left and right to reverse a string
            char temp = chars[left];
            chars[left] = chars[right];
            chars[right] = temp;
            left++;
            right--;
        }

        return new String(chars);
    }

    public static void main(String args[]){
       String str="Dream big"; // Changed the input string
       //calling the function which will return a string so we are printing that
       System.out.println(reverse(str));
    }
}

