"""
Given two strings a and b. The task is to find
if a string 'a' can be obtained by rotating another string 'b' by 2 places.
"""
def areSame(a, b):
    x = a[2:]+a[:2]
    y = a[-2]+a[:-2]
    print(x, y)
    if b == x or b == y:
        return 1
    else:
        return 0

if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        a = str(input())
        b = str(input())
        result = areSame(a, b)
        print(result)