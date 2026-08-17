inp = open('LUCKY.INP', 'r', encoding='utf-8').read().split('\n')
const = list(map(int, inp[0].split()))
arr_len = const[0]
lucky = const[1]
arr = list(map(int, inp[1].split()))

c = 0
for i in range(arr_len):
    for j in range(1, arr_len - i):
        if abs(arr[i] + arr[i + j]) == lucky:
            c += 1

with open('LUCKY.OUT', 'w', encoding='utf-8') as out:
    print(c, file=out)
