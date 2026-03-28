from math import sqrt
def sum_digits(n):
    ans = 0
    while n != 0:
        ans += n % 10
        n //= 10
    return ans
n = int(input())
a = list(map(int, input().split()))
maxx = max(a)
prime = [True] * (maxx + 1)
prime[0] = False
prime[1] = False
for i in range(2, int(sqrt(maxx)) + 1):
    if prime[i]:
        j = i * i
        while j <= maxx:
            prime[j] = False
            j += i
c = 0
for i in a:
    if prime[i] and prime[sum_digits(i)]:
        c += 1
print(c)