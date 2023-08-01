"""
Given a string, find the minimum number of characters to be inserted
to convert it to palindrome.
For Example:
ab: Number of insertions required is 1. bab or aba
aa: Number of insertions required is 0. aa
abcd: Number of insertions required is 3. dcbabcd
"""
# Reuse the longest Palindrome from the Problem 2
def longestPalindrome(s):
    n = len(s)
    best_len = 0
    best_s = ""
    for mid in range(n):
        x = 0
        while mid - x >= 0 and mid + x < n :
            if s[ mid - x] != s[mid + x]:
                break
            sub_len = 2*x + 1
            if sub_len > best_len:
                best_len = sub_len
                best_s = s[mid-x: mid+x + 1]
            x += 1
    for mid in range(n-1):
        x = 1
        while mid - x + 1 >=0 and mid + x < n :
            if s[mid-x+1] != s[mid+x]:
                break
            sub_len = 2 * x
            if sub_len > best_len:
                best_len = sub_len
                best_s = s[mid-x+1: mid+x+1]
            x += 1
    return best_s
def toFormPalindrome(string):
    best_substring = longestPalindrome(string[::-1])
    min_insertions = len(string) - len(best_substring)
    return min_insertions

if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        string = str(input())
        result = toFormPalindrome(string)
        print(result)