n, k = map(int, input().split())
a = (list(map(int, input().split())))
c = 0
v = 0
if max(a) != 0 or min(a) != 0:
    for i in range(n):
        if a[k - 1] <= a[i] and a[i] > 0:
            c += 1
    print(c)
else:
    print(0)