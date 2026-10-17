n = int(input())
a = sorted(map(int, input().split(" ")))
m = int(input())
b = sorted(map(int, input().split(" ")))
# print(n, a, m, b)

res = []
i = j = 0

while i < len(a) and j < len(b):
    if abs(a[i] - b[j]) <= 1:
        res.append([a[i], b[j]])
        i += 1
        j += 1
    elif a[i] - b[j] < -1:
        i += 1
    else:
        j += 1

print(len(res))
