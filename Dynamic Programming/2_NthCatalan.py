class Solution:
    def nthCatalan(ob, n):
        # Code
        if len(CatalanSeries) > n:
            return CatalanSeries[n]
        s = 0
        for i in range(0, n):
            s += ob.nthCatalan(i)*ob.nthCatalan(n-i-1)
        CatalanSeries.append(s)
        return CatalanSeries[n]
        


#{
#  Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__':
    t = int (input ())
    for _ in range (t):
        n = int(input())
        global CatalanSeries
        CatalanSeries = [1] 
        ob = Solution()
        print(ob.nthCatalan(n))
# } Driver Code Ends