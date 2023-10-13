class Solution(object):
    def isPalindrome(self, x):
        if x<0: return False

        div = 1
        #Loop to find the number which can give us the most significant digit
        while x >= div*10:
            div = div*10
        
        while x:
            #Here, we get the right-most and left-most digit of the given number 
            #and compare them
            right = x%10
            left = x // div

            if right!=left: return False

            #After comparing right and left, we drop these two digits,
            #so that in the next iteration we further compare pairs of left and right digits    
            x = (x%div)//10

            #the div number also has to be reduced, as num is also reduced
            div = div/100
        return True

        