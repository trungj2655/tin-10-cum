t = [0] + [2, 3, 7, 8, 4]
r = [0] + [4, 9, 10, 10]

dp = [0] * len(t)
dp[1] = t[1]

for i in range(2, len(t)):
    A = dp[i - 1] + t[i]
    B = dp[i - 2] + r[i - 1]

    dp[i] = min(A, B)
    
    print(A, B, dp)
