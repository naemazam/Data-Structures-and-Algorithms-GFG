"""
Your task  is to implement the function atoi.
The function takes a string(str) as argument and converts it to an integer and returns it.
"""
def atoi(s):
    if s.isdigit():
        return int(s)
    elif s[0] in ('-', '+'):
        return s
    else:
        return -1

if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        string = str(input())
        result = atoi(string)
        print(result)