#User function Template for python3

class Solution:
     def countFriendsPairings(self, n):
        dp = [0 for i in range(n + 1)] 
        m = 10**9+7
        for i in range(n + 1): 
  
            if(i <= 2): 
                dp[i] = i 
            else: 
                dp[i] = (dp[i - 1]%m + (i - 1) * dp[i - 2]%m)%m 
  
        return dp[n] 


#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int(input())
    for _ in range(t):
        n = int(input())
        ob = Solution()
        print(ob.countFriendsPairings(n))
# } Driver Code Ends