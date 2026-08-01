val = [[10, 40, 70], [20, 50, 80], [30, 60, 90]]
l = len(val)
hd = 3 # Hoat dong
dp = [[0] * hd for i in range(hd)]

for i in range(l):
    dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]) + val[i][0]
    dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + val[i][1]
    dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]) + val[i][2]

print(max(dp[hd - 1][0], dp[hd - 1][1], dp[hd - 1][2]))
