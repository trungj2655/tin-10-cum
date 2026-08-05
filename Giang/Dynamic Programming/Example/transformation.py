import sys
sys.stdin = open("transformation.inp", 'r')
sys.stdout = open("transformation.out", 'w')

m, n = map(int, input().split())
a = "_" + input()
b = "_" + input()
dp = [[0] * (n + 1) for _ in range(m + 1)]

for i in range(1, m + 1):
    for j in range(1, n + 1):
        if a[i] == b[j]: dp[i][j] = dp[i - 1][j - 1]
        else: dp[i][j] = min(dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]) + 1

print(dp[m][n])

sys.stdout.close()
