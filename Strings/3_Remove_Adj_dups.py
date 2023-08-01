"""
Given a string s, recursively remove adjacent duplicate characters from the string s.
The output string should not have any adjacent duplicates.
"""

def containsDups(string):
    l = list(string)
    for i in range(len(string) - 1):
        if l[i] == l[i+1]:
            return True
    return False

def rmAdjDups(string):
    l = list(string)
    n = len(string)
    i = 0
    rep = []
    while i < n-1:

        if l[i] == l[i+1]:
            # print(l[i], l[i+1])
            rep.append(i)
            rep.append(i+1)
        i+=1
    tup = list(set(rep))
    # print(tup)
    # print(l, len(l))
    for x in sorted(tup, reverse =True):
        # print(x, type(x))
        del l[x]


    return ''.join(l)
if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        string = str(input())
        while(containsDups(string)):
            string = rmAdjDups(string)
        print(string)