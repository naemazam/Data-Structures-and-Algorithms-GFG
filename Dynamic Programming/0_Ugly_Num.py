#User function Template for python3
class Solution:
	def getNthUglyNo(self,n):
		# code here
        Ugly = [1]*n
    	if n == 1:
    	    return 1
    	# i = [i2, i3, i5]
    	i = [0, 0, 0]
    
    	for count in range(1, n):
    	    nm = [ Ugly[i[0]] * 2, Ugly[i[1]] * 3, Ugly[i[2]] * 5]
    	    min_ = min(nm)
            for j in range(3):
                if nm[j] == min_:
                    i[j] += 1
            Ugly[count] = min_
        return Ugly[-1]

#{ 
#  Driver Code Starts
#Initial Template for Python 3



if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n = int(input())
        ob = Solution()
        ans = ob.getNthUglyNo(n);
        print(ans)
        tc -= 1

# } Driver Code Ends