import sys
inp = 4
dp = [0] * (inp + 1)
dp[1] = 3
dp[2] = 8

for i in range(3, inp + 1):
    dp[i] = 2 * dp[i - 1] + 2 * dp[i - 2]

print(dp)
