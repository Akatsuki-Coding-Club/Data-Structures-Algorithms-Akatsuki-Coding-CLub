class Solution(object):
    def hammingWeight(self, n):
        set_bits = 0
        while n > 0:
            if n % 2 != 0:
                set_bits += 1
            n = n//2
        return set_bits
