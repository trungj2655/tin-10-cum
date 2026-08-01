def fibo(n):
    if n in (1, 2): return 1
    else:
        if F[n] != 0: return F[n]
        F[n] = fibo(n - 1) + fibo(n - 2)
    return F[n]


F = [0] * (11)
print(fibo(1))
