
fh_inp = open("MTX.INP", 'r', encoding='utf-8')
inp = fh_inp.read().split('\n')

matrix_count = int(inp[0])
inp.pop(0)
matrix = []
l = 3
for i in range(matrix_count):
    matrix.append([])
    for j in range(l):
        matrix[i].extend(inp[0].split())
        inp.pop(0)

fh_out = open("MTX.OUT", 'w', encoding='utf-8')

for m in range(matrix_count):
    idx = matrix[m].index("?")
    column = idx % l
    row = idx // l
    repeat_row = []
    repeat_column = []

    for i in range(l):
        c = column + i * l
        if matrix[m][c] not in repeat_column: 
            repeat_column.append(matrix[m][c])
        else:
            break

        r = row + i 
        if matrix[m][r] not in repeat_row:
            repeat_row.append(matrix[m][r])
        else:
            break

    unique = list(set(matrix[m]))
    not_in_column = [item for item in unique if item not in repeat_column]
    not_in_row = [item for item in unique if item not in repeat_row]

    if not_in_column != not_in_row:
        print(not_in_column[0], file=fh_out)
    else:
        print("IMPOSSIBLE", file=fh_out)

fh_out.close()

