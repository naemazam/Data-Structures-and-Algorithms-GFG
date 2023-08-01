"""
Largest subarray with sum 0
"""
def maxLen(n, arr):
    hashmap = {}
    sum_, res = 0, 0
    
    for i in range(len(arr)):
        sum_ += arr[i]
        if sum_ == 0:
            res = i+1
        if sum_ in hashmap:
            res = max(res, i-hashmap[sum_])
        else:
            hashmap[sum_] = i
    return res





if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        result = maxLen(n, arr)
        print(result)