t = int(input())

for _ in range(t):
    n = int(input())
    s = input().strip()

    l = 0
    r = n - 1

    while l < r:
        if s[l] != s[r]:
            l += 1
            r -= 1
        else:
            break

    print(r - l + 1)
