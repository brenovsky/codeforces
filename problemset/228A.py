colors = list(map(int, input().split()))

colors2 = []

counter = 0

for i in range(4):
    if colors[i] in colors2:
        counter += 1
    colors2.append(colors[i])

print(f'{counter}')