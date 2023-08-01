"""
Given an string in roman no format (s)  your task is to convert it to integer .Given an string in roman no format (s)
your task is to convert it to integer .
"""
def RomantoInt(s):
    romans = {'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
    value = romans[s[-1]]
    for i in range(len(s) - 1):
        if romans[s[i]] >= romans[s[i+1]]:
            value += romans[s[i]]
        else:
            value -= romans[s[i]]
    return value
    pass

if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        string = str(input())
        result = RomantoInt(string)
        print(result)