n = int(input())
words = []
for i in range(n):
    word = str(input())
    if len(word) > 10:
        word = word[0] + f'{(len(word) - 2)}' + word[-1]
        words.append(word)
    else:
        words.append(word)
for i in range(n):
    print(words[i])