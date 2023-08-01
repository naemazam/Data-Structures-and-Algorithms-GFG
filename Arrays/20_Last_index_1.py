"""
Given a string S consisting only '0's and '1's,
 print the last index of the '1' present in it.
"""
def indexOfLastOne(string):
    for i in reversed(range(len(string))):
        if string[i] == '1':
            return i
    return -1
    pass

if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        # n = int(input())
        string = input()
        # k = int(input())
        result = indexOfLastOne(string)
        print(result)