"""
Given an array of integers, write a function that returns true if there is a triplet (a, b, c)
that satisfies a2 + b2 = c2.
"""
def isPythogoreanTriplet(l, n):
    if n < 3:
        return "No"
    l = [x**2 for x in l]
    l.sort()
    # Let's copy some code from Counting Triplets
    for i in reversed(range(2,n)):
        j, k = 0, i-1
        while(j<k):
            if l[j]+l[k] == l[i]:
                j+=1
                k-=1
                return "Yes"
            elif l[j]+l[k] < l[i]:
                j+=1
            else:
                k-=1
    return "No"

if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        n = int(input())
        l = list(map(int, input().split()))
        # k = int(input())
        result = isPythogoreanTriplet(l, n)
        print(result)