s = open("MXFRQ.INP", 'r', encoding='utf-8').read().split()[1]
count = {}

fh_out = open("MXFRQ.OUT", 'w', encoding='utf-8')

for char in s: count[char] = count.get(char, 0) + 1

value = tuple(count.items())
m = -1
for i in range(len(value)):
    if value[i][1] > m:
        m = value[i][1]

a = []
char = 1
c = m
for i in range(m * (m + 1) // 2):
    a.append(char)
    if c > 1:
        c -= 1
    else:
        c = m - char
        char += 1 

l = len(a)
if l % 2 == 1:
    print(a[l // 2 + 1], file=fh_out)
else:
    print(a[l // 2], file=fh_out)
    