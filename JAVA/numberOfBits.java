public class numberOfBits {
    public int numberOfOneBits(int number) {
        int count = 0;
        while (number != 0) {
          
            if ((number & 1) == 1) {
                count++;
            }
           
            number = number >> 1;
        }
        return count;
    }

    public static void main(String[] args) {
        numberOfBits bit1 = new numberOfBits();
        int result = bit1.numberOfOneBits(10);
        System.out.println(result);
    }
}
