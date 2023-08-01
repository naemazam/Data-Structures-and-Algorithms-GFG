"""
Given an array A of positive integers of size N,
where each value represents number of chocolates in a packet.
Each packet can have variable number of chocolates.
There are M students, the task is to distribute chocolate packets such that :
1. Each student gets one packet.
2. The difference between the number of chocolates given to the students having packet with maximum chocolates and student having packet with minimum chocolates is minimum.
"""
import math
def MinChooclateDiff(l, n, m):
    l.sort()
    min = math.inf
    for i in range(0,n-m+1):
        if(l[i+m-1]-l[i] < min ):
            min = l[i+m-1]-l[i]
    return min

if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        n = int(input())
        l = list(map(int, input().split()))
        k = int(input())
        result = MinChooclateDiff(l, n, k)
        print(result)