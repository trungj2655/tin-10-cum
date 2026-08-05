import sys
sys.stdin = open("ValiA.inp", 'r')
sys.stdout = open("ValiA.out", 'w')
n, total_weight = list(map(int, input().split()))
value = []
weight = []

for i in range(n):
    x, y = map(int, input().split())
    value.append(x)
    weight.append(y)

value.insert(0, 0)
weight.insert(0, 0)
dp = [[0] * (total_weight + 1) for _ in range(n + 1)]

for i in range(1, n + 1):
    for j in range(1, total_weight + 1):
        if weight[i] > j: dp[i][j] = dp[i - 1][j]
        else: dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weight[i]] + value[i])

print(dp[n][total_weight])
sys.stdout.close()
