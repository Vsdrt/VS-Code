n = int(input())
a = list(map(int, input().split(" ")))

l = 0
mx = 1

for r in range(1, n):
    if a[r - 1] >= a[r]:
        l = r
    else:
        mx = max(mx, r - l + 1)

print(mx)


