"""
Given a array of N strings,
find the longest common prefix among all strings present in the array.
"""

def longestCommPrefix(strings):
    ref, n = strings[0], len(strings)
    preffix = ''
    for i in range(len(ref)):
        count = 0
        for string in strings:
            try:
                if ref[i] == string[i]:
                    count += 1
            except:
                break
        if count == n:
            preffix = preffix + ref[i]
            # print(preffix + ref[i])
        else:
            break
    if preffix == '':
        return -1
    else:
        return preffix


if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        n = int(input())
        strings = [str(x) for x in input().split()]
        result = longestCommPrefix(strings)
        print(result)