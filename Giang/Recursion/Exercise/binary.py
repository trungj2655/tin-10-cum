def to_binary(n):
    n = int(n)
    if n == 0:
        return "0"
    
    return str(to_binary(n // 2)) + str((n % 2))


def to_base10(n):
    if len(n) < 2:
        if n[0] == "1":
            return 2 ** 0
        return 0
    
    if n[0] == "1":
        return 2 ** (len(n) - 1) + to_base10(n[1:])
    return to_base10(n[1:])