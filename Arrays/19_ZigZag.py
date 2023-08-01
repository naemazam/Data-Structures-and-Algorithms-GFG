"""
Given an array A (distinct elements) of size N.
Rearrange the elements of array in zig-zag fashion.
The converted array should be in form a < b > c < d > e < f.
The relative order of elements is same in the output i.e you have to iterate on the original array only.
"""
def sortZigZag(arr,n):
    for i in range(0,n-1):
        if i%2 == 0 and arr[i] > arr[i+1] :
            arr[i], arr[i+1] = arr[i+1], arr[i]
        elif i%2 != 0 and arr[i] < arr[i+1]:
            arr[i], arr[i+1] = arr[i+1], arr[i]
    return arr
    pass

if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        n = int(input())
        l = list(map(int, input().split()))
        # k = int(input())
        result = sortZigZag(l, n)
        print(*result)