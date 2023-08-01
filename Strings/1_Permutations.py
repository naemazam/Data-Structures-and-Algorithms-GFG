"""
Given a string S.
The task is to print all permutations of a given string.
"""
result = []
def permutate(str, i, length):
    data = list(str)
    if i == length:
        result.append(''.join(data) )
    else:
        for j in range(i, length):
            data[i], data[j] = data[j], data[i]
            permutate(data, i + 1, length)
            data[i], data[j] = data[j], data[i]

if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        string = str(input())
        permutate(string, 0,len(string))
        result.sort()
        print(*result)
        result.clear()
