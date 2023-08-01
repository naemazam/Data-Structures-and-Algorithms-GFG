Fib_series = [0, 1]
class Solution:
    def nthFibonacci (ob, n):
        if len(Fib_series) > n:
            return Fib_series[n]
        Fib_series.append(ob.nthFibonacci(n-1) + ob.nthFibonacci(n-2))
        return Fib_series[n]


#{ 
#  Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        n = int(input())
        
        ob = Solution()
        print(ob.nthFibonacci(n))
# } Driver Code Ends