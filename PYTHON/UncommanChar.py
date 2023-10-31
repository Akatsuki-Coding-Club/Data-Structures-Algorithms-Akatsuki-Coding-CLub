class Solution:
    def UncommonChars(self,A, B):
        #code here
        list = ''
        for char in A:
            if char not in B and char not in list:
                list+=char
                
            
        for char in B:
            if char not in A and char not in list:
                list+=char
           
        a = "".join(sorted(list))
        
        if len(a) > 0:
            return a
        else:
            return -1