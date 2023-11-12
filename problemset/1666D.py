original = []
word = []
results = []

n = int(input())

for i in range(n):
    s = input()
    t = input()

    for j in range(len(s)):
        original.append(s[j])

    for j in range(len(t)):
        word.append(t[j])

    for j in range(len(s)):
        for k in range(len(t)):
            if t[k] == s[j]:
                original[j] = 0
                break

    else:
        results.append(0)

print(results)
#revisar