n = int(input())
answer = list(map(int, input().split()))
if 1 in answer:
    print('HARD')
else:
    print('EASY')