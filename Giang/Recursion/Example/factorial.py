n = 5

from math import factorial
print(factorial(n))

s = 1
for i in range(1, n + 1):
    s *= i
print(s)

def fac(k):
    if k == 1: return k
    else:
        return k * fac(k - 1)
print(fac(n))