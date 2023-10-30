n = int(input())
solve = 0
for i in range(n):
    p, v, t = map(int, input().split())
    if p + v + t >= 2:
        solve += 1
print(solve)