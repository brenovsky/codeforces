copy = []
results = []

n = int(input())


for i in range(n):
    s = input()
    t = input()

    j = len(s) - 1
    word = True
    for i in range(len(t) - 1, -1, -1):
        count = 0
        while j != 0:
            if t[i] == s[j]:
                count += 1
                if count > 1:
                    word = False
                    break
                break
            copy.append(s[j])
            if word:
                j = len(s) - copy.index(s[j]) - 1
            j -= 1
        
    print(word)


print(results)
#Ir analisando de trás pra frente e verificando se as ocorrências de T são as últimas ocorrências em S.