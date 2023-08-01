# User function Template for Python3

class Solution:
    def equalPartition(self, N, arr):
        # code here
        Sum = sum(arr)
        if Sum%2 != 0:
            return 0

        Sum = Sum//2
        dp = [[False for j in range(Sum+1)] for i in range(2)]
        for i in range(2):
            dp[i][0] = True
        for j in range(1, Sum+1):
            dp[0][j]= False

        for i in range(1, N+1):
            for j in range(1, Sum+1):
                if j >= arr[i-1]:
                    dp[i%2][j] = dp[(i-1)%2][j-arr[i-1]] or dp[(i-1)%2][j]
                else:
                    dp[i%2][j] = dp[(i-1)%2][j]
        
        return int(dp[1][Sum])


#{ 
#  Driver Code Starts
# Initial Template for Python3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        arr = input().split()
        for it in range(N):
            arr[it] = int(arr[it])
        
        ob = Solution()