inp = list(map(int, open('UCLN.INP').read().split()))
a = inp[0]
b = inp[1]

while a != b:
    if a > b:
        a = a - b
    elif a < b:
        b = b - a

# Do bài toán chạy đến khi a = b
# Nên lấy a hoặc b làm giá trị in ra đều được
print(a, file=open('UCLN.OUT', 'w')) 