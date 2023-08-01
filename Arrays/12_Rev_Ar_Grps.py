"""
Given an array arr[] of positive integers of size N.
Reverse every sub-array of K group elements.
"""
t = int(input())
for i in range(t):
    n,d=map(int,input().split())
    if d>n:
        d=n
    l=list(map(int,input().split()))
    cnt=0
    while(cnt<n):
        tmp=l[cnt:cnt+d]
        cnt=cnt+d
        tmp.reverse()
        for k in tmp:
            print(k,end=' ')
    print()