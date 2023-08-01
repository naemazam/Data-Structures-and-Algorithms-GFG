class Solution:
    def count(self, S, m, n): 
        # code here
        dp = [0] * (n+1)
        dp[0] = 1

        for i in range(x, n+1):
            for x in S:
                if  i-x >= 0:
                    dp[i] += dp[i-x]
        return dp[n]
            




#{ 
#  Driver Code Starts
#Initial Template for Python 3


if __name__ == '__main__': 
    t = int(input())
    for _ in range(t):
        n,m = list(map(int, input().strip().split()))
        S = list(map(int, input().strip().split()))
        ob = Solution()
        print(ob.count(S,m,n))
# } Driver Code Ends