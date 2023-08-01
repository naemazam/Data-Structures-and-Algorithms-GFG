"""
Your task is to implement the function strstr.
The function takes two strings as arguments (s,x) and
locates the occurrence of the string x in the string s.
The function returns and integer denoting the first occurrence of the
string x in s (0 based indexing).
"""
def StrinStr(s, p):
    try:
        res = s.index(p)
    except:
        res = -1
    return res
if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        str1, str2 = [str(x) for x in input().split()]
        result = StrinStr(str1, str2)
        print(result)