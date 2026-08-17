inp = open('GAME.INP', 'r', encoding='utf-8').read().split('\n')
const = list(map(int, inp[0].split()))
arr_len = const[0]
k = const[1]
with open('GAME.OUT', 'w', encoding='utf-8') as out:
    pass

def max_game(arr):
    l = len(arr)  
    if l < 3:
        return arr[0] + arr[1]

    val = arr[:l - 1]
    print(val, arr[l - 1])
    return max_game(val) + arr[l - 1]

print(max_game([1, 3, 4, 2, 3, 4]))
