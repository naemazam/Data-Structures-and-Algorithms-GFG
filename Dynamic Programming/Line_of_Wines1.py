#User function Template for python3
class Solution:
    n = 0
    # DP table to save the intermediates

    def __init__(self, n) -> None:
        self.n = n
        self.table =  [ [-1 for col in range(n)]
		                    for row in range(n)]
    def DPUtil(self, price, beg, end, n):

        if self.table[beg][end] != -1:
            return self.table[beg][end]

        year = n - (end - beg)
        if beg == end:
            return year * price[beg]

        x = price[beg] * year + self.DPUtil(price, beg+1, end, n)
        y = price[end] * year + self.DPUtil(price, beg, end-1, n)

        ans = max(x, y)
        self.table[beg][end] = ans

        return ans

    def MaxProfit(self, P, n):
        profit = self.DPUtil(P, 0, n-1, n)
        return profit


#{
#  Driver Code Starts
#Initial Template for Python 3



if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n = int(input())
        A = [int(x) for x in input().split()]
        ob = Solution(n)
        ans = ob.MaxProfit(A, n)
        print(ans)
        tc -= 1

# } Driver Code Ends