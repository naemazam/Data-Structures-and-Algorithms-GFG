"""
The cost of stock on each day is given in an array A[] of size N.
Find all the days on which you buy and sell the stock so that in between those days your profit is maximum.
The rules of buying and selling are this:
1) on any day, you can only either: buy 1 share, sell 1 share, or do nothing;
2) you can never hold more than one share (so if you've already bought one share,
you cannot buy another until you sell the share you're holding first).
"""

def findBestStockDays(l, n):
    buyStock, sellStock = [False]*n, [False]*n
    for i in range(n):
        if i==0 :
            if l[i]<l[i+1] :
                buyStock[i] = True
        elif i==n-1:
            if l[i]>l[i-1]:
                sellStock[i] = True
        elif l[i]<l[i+1] and l[i]<l[i-1]:
            buyStock[i] = True
        elif l[i]>l[i+1] and l[i]>l[i-1]:
            sellStock[i] = True

    BuySell = [buyStock[i] or sellStock[i] for i in range(n)]
    if all(not i for i in BuySell):
        print("No Profit")
        return

    stock =  False
    days = []
    for i in range(n):
        if BuySell[i] and not stock:
            stock = True
            days.append(i)
        elif BuySell[i] and stock:
            stock = False
            days.append(i)
    return days


if __name__ == "__main__":
    T = int(input())
    for t in range(T):
        n = int(input())
        l = list(map(int, input().split()))
        # k = int(input())
        result = findBestStockDays(l, n)
        if result is not None:
            for i in range(0,len(result)-1, 2):
                print("("+str(result[i])+" "+str(result[i+1])+")", end=" ")
            print()
