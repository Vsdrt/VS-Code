n = int(input())
price = list(map(int, input().split()))
price.sort()

q = int(input())
values = [int(input()) for _ in range(q)]

# print(n, price, q, values)
res = []

for i in values:
    l = 0
    r = len(price) - 1
    cnt = 0

    while l <= r:
        m = (r + l) // 2
        if i < price[m]:
            r = m - 1
        else:
            l = m + 1

    res += [l]

for i in res:
    print(i)
