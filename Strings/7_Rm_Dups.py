"""
Given a string, the task is to remove duplicates from it.
Expected time complexity O(n) where n is length of input string and extra space O(1)
under the assumption that there are total 256 possible characters in a string.
"""

def removeDups(s):
    l = list(s)
    for i in reversed(range(len(s))):
        if l[i] in l[:i]:
            del l[i]
    return ''.join(l)

if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        string = str(input())
        result = removeDups(string)
        print(result)