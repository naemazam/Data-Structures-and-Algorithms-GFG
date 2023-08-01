"""
Given an array arr[] of N non-negative integers representing height of blocks at index i as Ai where the width of each block is 1. Compute how much water can be trapped in between blocks after raining.
Structure is like below:
|  |
|_|
We can trap 2 units of water in the middle gap.
"""

def TrapWater(l, n):
    total_water = 0
    lmax, rmax = [], []
    lmax.append(l[0]), rmax.append(l[n-1])
    for i in range(1,n):
        lmax.append(max(lmax[i-1],l[i]))
    for i in (range(1, n)):
        rmax.append(max(rmax[i-1], l[n-i-1]))
    rmax.reverse()
    total_water = 0
    for i in range(1,n-1):
        min_h = min(lmax[i],rmax[i])
        water = min_h - l[i]
        # print("lmax {}  rmax {} min_h {} water {}".format(lmax[i], rmax[i], min_h, water))
        total_water += water
    return total_water


if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        n = int(input())
        l = list(map(int, input().split()))
        # k = int(input())
        result = TrapWater(l, n)
        print(result)