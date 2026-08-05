arr = [1, 2, 5, 4, 6, 2, 1]
n = len(arr)
dp = [1] * n

for i in range(n):
    for j in range(1, i):
        if arr[j] > arr[i]:
            dp[i] = max(dp[i], dp[j] + 1)

print(dp[n - 1])
