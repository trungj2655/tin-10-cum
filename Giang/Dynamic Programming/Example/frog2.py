step = 3
h = [0] + [10, 30, 40, 50, 20]
l = len(h)
dp = [0] * l
dp[2] = abs(h[2] - h[1])

for i in range(3, l):
    
    dp[i] = int(1e9)
    for j in range(max(1, i - step), i):
        
        dp[i] = min(dp[j] + abs(h[i] - h[j]), dp[i])
        print(dp)

    print()

print(dp[l - 1])







