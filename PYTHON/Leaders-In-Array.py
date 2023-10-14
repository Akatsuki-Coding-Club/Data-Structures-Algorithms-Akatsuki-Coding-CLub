class Solution:
    def leaders(self, A, N):
        ans = []  
        max_right = A[N - 1]  
        ans.append(max_right)
        
        for i in range(N - 2, -1, -1):
            if A[i] >= max_right:
                ans.append(A[i])
                max_right = A[i] 
        ans.reverse()
        
        return ans
    