"""
Given a string S, find the longest palindromic substring in S.
Substring of string S: S[ i . . . . j ] where 0 ≤ i ≤ j < len(S).
Palindrome string: A string which reads the same backwards.
More formally, S is palindrome if reverse(S) = S.
Incase of conflict, return the substring which occurs first
( with the least starting index ).
NOTE : Required Time Complexity O(n2).
"""
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

if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        string = str(input())
        result = longestPalindrome(string)
        print()