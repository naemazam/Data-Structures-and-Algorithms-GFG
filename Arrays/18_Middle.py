"""
Given an unsorted array of size N.
Find the first element in array such that all of its left elements are smaller
and all right elements to it are greater than it.

Note: Left and right side elements can be equal to required element.
And extreme elements cannot be required element.
"""

def Middle(arr, n):
    lmax, rmin = [0]*n, [0]*n
    lmax[0] = arr[0]
    for i in range(1, n):
        lmax[i]= max(lmax[i-1],arr[i])
    rmin[n-1] = arr[n-1]
    for i in reversed(range(n-1)):
        rmin[i] = min(rmin[i+1],arr[i])
    # print(*lmax)
    # print(*rmin)
    for i in range(1,n-1):
        if lmax[i] == rmin[i]:
            return arr[i]
    return -1

if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        # k = int(input())
        result = Middle(arr, n)
        print(result)