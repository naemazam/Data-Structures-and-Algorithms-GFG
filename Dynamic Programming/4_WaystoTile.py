class Solution:
    def numberOfWays(self, N):
        # code her
        DP = [0]*(N+1)
        DP[0] = 1
        DP[1] = 1
        # if N < 2:
        #     return DP[N]
        for i in range(2, N+1):
            DP[i] = (DP[i-1] + DP[i-2]) 
        return DP[N]%(10**9+7)


#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N=int(input())
        
        ob = Solution()
        print(ob.numberOfWays(N))
# } Driver Code Ends