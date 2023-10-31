x = int(input())
step = 5
i = 0
while x != 0:
    if x >= step:
        x -= step
        i += 1
    else:
        step = step - 1
print(i)