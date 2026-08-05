import sys
sys.stdin = open("lnds.inp", 'r')
sys.stdout = open("lnds.out", 'w')

n = int(input())
arr = [0] + list(map(int, input().split()))
dp = [1] * (n + 1)
dp[0] = 0

for i in range(1, n + 1):
    for j in range(1, i):
        if arr[i] >= arr[j]:
            dp[i] = max(dp[i], dp[j] + 1)

print(dp[n])
sys.stdout.close()
