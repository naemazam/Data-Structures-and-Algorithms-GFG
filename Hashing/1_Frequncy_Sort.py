"""
Sorting Elements of an Array by Frequency
"""
def frequencySort(A, n):
    map = {}
    for i in A:
        if i not in map:
            map[i] = 1
        else:
            map[i] += 1
    print(map)
    map = {k: v for k, v in sorted(map.items(), key=lambda item: item[1], reverse=True)}
    print(map)
    res = []
    for i in map:
        while map[i]:
            res.append(i)
            map[i] -= 1
    return res

if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        n = int(input())
        A = [int(x) for x in input().split()]
        result = frequencySort(A, n)
        print(*result)