class Solution():
    def find_set_bit(self, num):
        binary = ""
        # Convert decimal to binary in reverse
        while(num!=0):
            binary += str(num%2)
            num = num//2
        # Return index + 1 if there is a set bit
        if '1' in binary:
            return (binary.index("1")+1)
        # Return 0 if there's no set bit
        return 0
