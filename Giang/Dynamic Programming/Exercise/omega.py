n = 14
coins = [1, 3, 4, 5, 6]
dp = [float('inf')] * (n + 1)
dp[0] = 0

last_coin = [-1] * (n + 1)

for amount in range(1, n + 1):
    for coin in coins:
        if coin <= amount:
            if dp[amount - coin] + 1 < dp[amount]:
                dp[amount] = dp[amount - coin] + 1
                last_coin[amount] = coin

'''
print("min coins")
for i in range(n + 1):
    print(f"{i:2} : {dp[i]}")
'''

c = []
current = n

while current > 0:
    c.append(last_coin[current])
    current -= last_coin[current]

print(dp[n])
print(c)