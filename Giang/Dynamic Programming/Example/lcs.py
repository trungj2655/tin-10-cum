import sys
sys.stdin = open('lcs.inp', 'r')
sys.stdout = open('lcs.out', 'w')

m, n = map(int, input().split())

p = input()
q = input()

dp = []
for i in range(m + 1):
    x = []
    for j in range(n + 1):
        x.append(0)
    dp.append(x)

for i in range(1, m + 1):
    for j in range(1, n + 1):
        if p[i - 1] == q[j - 1]: dp[i][j] = dp[i - 1][j - 1] + 1
        else: dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])

l = len(dp)
print(dp[l - 1][len(dp[l - 1]) - 1])

sys.stdout.close()
