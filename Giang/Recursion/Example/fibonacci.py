def fibo(n=12):
    if n in [1, 2]:
        return 1
    else:
        return fibo(n - 1) + fibo(n - 2)

print(fibo())