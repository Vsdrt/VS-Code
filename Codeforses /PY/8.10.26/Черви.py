n = int(input())  # количество кучек
a = list(map(int, input().split(" ")))  # количество червей в кучке
m = int(input())  # количество сочных червей
q = list(map(int, input().split(" ")))  # номера сочных червей
# print(n, a, m, q)

sm = [0, ]
for i in a:
    sm += [sm[-1] + i]
sm.remove(0)
# print(sm)

res = []

for i in q:
    l = 0
    r = len(sm) - 1

    while l <= r:
        mid = (r + l)//2

        if i <= sm[mid]:
            r = mid - 1
        else:
            l = mid + 1

    res += [l + 1]

for i in res:
    print(i)
