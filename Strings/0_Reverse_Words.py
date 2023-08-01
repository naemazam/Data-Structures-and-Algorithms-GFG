"""
Given a String of length S, reverse the whole string
without reversing the individual words in it.
Words are separated by dots.
"""
def reverseWords(s):
    l = list(s.split('.'))
    l = reversed(l)
    return '.'.join(l)
if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        string = str(input())
        result = reverseWords(string)
        print(result)