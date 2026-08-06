arr = [3, 1, 5, 2, 3, 6, 4, 5, 2, 1, 4]
n = len(arr)
dp = [1] * n

for i in range(n):
    for j in range(1, i):
        if arr[j] > arr[i]:
            dp[i] = max(dp[i], dp[j] + 1)

print(dp[n - 1])




 
