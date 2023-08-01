"""
Given two strings a and b consisting of lowercase characters.
The task is to check whether two given strings are anagram of each other or not.
An anagram of a string is another string that contains same characters,
only the order of characters can be different.
For example, “act” and “tac” are anagram of each other.
"""
def isAnagram(s1, s2):
        l1, l2 = list(s1), list(s2)
        l1.sort(), l2.sort()
        if l1 == l2:
            return "YES"
        else:
            return "NO"

if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        s1, s2 = [str(x) for x in input().split(' ')]
        result = isAnagram(s1, s2)
        print(result)