class Solution:
    Factorial_table = [1]
    def factorial(self, num):
        # global Factorial_table
        # Factorial_table= [1]

        if len(self.Factorial_table) > num:
            return self.Factorial_table[num]

        self.Factorial_table.append(num * self.factorial(num-1))

        return self.Factorial_table[num]

    def nCr(self, n, r):
        # code here
        if n < r or n <= 0 or r < 0:
            return 0
        res = self.factorial(n) // (self.factorial(r) * self.factorial(n-r))
        return res%(10**9+7)




#{
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n, r = [int(x) for x in input().split()]
        
        ob = Solution()
        print(ob.nCr(n, r))
# } Driver Code Ends