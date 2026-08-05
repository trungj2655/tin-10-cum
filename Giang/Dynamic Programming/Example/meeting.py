import sys
sys.stdin = open("meeting.inp", 'r')
sys.stdout = open("meeting.out", 'w')

n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

for i in range(n - 1):
    for j in range(i + 1, n):
        if a[i] > a[j]:
            a[i], a[j] = a[j], a[i]
            b[i], b[j] = b[j], b[i]

a = [0] + a
b = [0] + b

dp = [1] * (n + 1)
for i in range(2, n + 1):
    for j in range(1, i):
        if a[i] >= b[j]:
            dp[i] = max(dp[i], dp[j] + 1)

print(dp[n])
sys.stdout.close()
