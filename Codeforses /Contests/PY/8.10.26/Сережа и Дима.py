n = int(input())
a = list(map(int, input().split(' ')))

ser = []
dim = []
xod = 0

while len(a) > 0:
    if xod % 2 == 0:
        best = max(a[0], a[-1])
        a.remove(best)
        ser += [best]
        xod += 1
    else:
        best = max(a[0], a[-1])
        a.remove(best)
        dim += [best]
        xod += 1

print(sum(ser), sum(dim))
