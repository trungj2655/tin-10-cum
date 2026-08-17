inp = open('STAR.INP', 'r', encoding='utf-8').read().split('\n')
arr_len = int(inp[0])
arr = [list(map(int, inp[i].split())) for i in range(1, 3)]
path_sum = [[], []]

path_sum[0].extend([arr[0][i] for i in range(0, arr_len, 2)])
path_sum[0].extend([arr[1][i] for i in range(1, arr_len, 2)])
path_sum[1].extend([arr[1][i] for i in range(0, arr_len, 2)])
path_sum[1].extend([arr[0][i] for i in range(1, arr_len, 2)])

with open('STAR.OUT', 'w', encoding='utf-8') as out:
    solution = max(sum(path_sum[0]), sum(path_sum[1]))
    print(solution, file=out)
