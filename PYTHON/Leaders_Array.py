class Solution:
    #Back-end complete function Template for Python 3
    
    #Function to find the leaders in the array.
    def leaders(self, A, N):
        ans = []
        
        maxele = 0
        for i in range(N-1,-1, -1):
            if A[i] >= maxele:
                ans.append(A[i])
                maxele = A[i]
           

        
        return reversed(ans)