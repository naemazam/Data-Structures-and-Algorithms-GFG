"""
Given a string S, find length of the longest substring with all distinct characters.
For example, for input "abca",
the output is 3 as "abc" is the longest substring with all distinct characters.
"""
def isDistSubStr(s):
    if len(list(s)) == len(set(s)):
        return True
    else:
        return False

def LongDistSubStr(s):
    allSub = [s[i:j] for i in range(len(s)) for j in range(i+1, len(s)+1)]
    max_l = 1
    for sub in allSub:
        if len(sub) > max_l and isDistSubStr(sub):
            max_l = len(sub)
    return max_l


if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        string = str(input())
        result = LongDistSubStr(string)
        print(result)