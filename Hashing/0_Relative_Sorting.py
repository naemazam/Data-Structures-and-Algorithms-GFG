"""
Relative Sorting 
"""
def sortbyarray(A1, A2, m, n):
    map = {}
    for i in A1:
        if i not in map:
            map[i] = 1
        else:
            map[i] += 1
    res = []
    for i in A2:
        while(map[i]):
            res.append(i)
            map[i] -= 1

    
    map = sorted(map.items())
    for i in map:
        count = i[1]
        while(count):
            res.append(i[0])
            count -= 1
    return res
    
    
if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        M, N = map(int, input().split())
        A1 = [int(x) for x in input().split()]
        A2 = [int(x) for x in input().split()]
        result = sortbyarray(A1, A2, M, N)
        print(*result)