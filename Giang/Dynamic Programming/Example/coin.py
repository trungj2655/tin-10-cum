import sys
sys.stdin = open("coin.inp", 'r', encoding="utf-8")
n, s = list(map(int, input().split()))
val = list(map(int, input().split()))

sys.stdout = open("coin.out", 'w', encoding="utf-8")

dp = [0] * (s + 1)

for i in range(1, s + 1):
    Max = int(1e4)
    for v in val:
        if i >= v: Max = min(Max, dp[i - v])
    dp[i] = Max + 1

print(dp[s])

sys.stdout.close()
