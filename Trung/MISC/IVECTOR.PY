import sys
#sys.stdin = open('IVECTOR.INP', 'r', encoding='utf-8')
#sys.stdout = open('IVECTOR.OUT', 'w', encoding='utf-8')
n = int(input())
a = list(map(int, input().split()))
A = [0] * n
b = [0] * n
for i, v in enumerate(a):
    A[v - 1] = i;
B = list(map(int, input().split()))
for i, v in enumerate(A):
    ans = 0
    for j in range(v):
        if a[j] > i + 1:
            ans += 1
    print(ans, end=' ')
for i, v in enumerate(B):
    c = 0
    for j in range(n):
        if b[j] == 0:
            if c == v:
                b[j] = i + 1
                break
            c += 1
print()
for i in b:
    print(i, end=' ')