inp = open('frog_input.txt', 'r', encoding='utf-8').read().split()
out = open('frog_output.txt', 'w', encoding='utf-8')

n = len(inp)
h = list(map(int, inp))
dp = [0] * n
dp[1] = abs(h[1] - h[0])

for i in range(2, n):
    A = dp[i - 1] + abs(h[i] - h[i - 1])  
    B = dp[i - 2] + abs(h[i] - h[i - 2])
    dp[i] = min(A, B)
    
print(dp[n - 1], file=out)
out.close()
