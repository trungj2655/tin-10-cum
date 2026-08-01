def count_num(n):
    n = abs(n)
    if n == 0:
        return 0
    
    return 1 + count_num(n // 10)
  
  
def sum_num(n):
    n = abs(n)
    if n == 0:
        return 0
    
    return n % 10 + sum_num(n // 10)


def sum_odd(n):
    if n == 0:
        return 0   
    val = sum_odd(n // 10)
    if n % 2 == 1:
        return n % 10 + val
    
    return val


def sum_even(n):
    if n == 0:
        return 0
    val = sum_odd(n // 10)
    if n % 2 == 0:
        return n % 10 + val
    
    return val

def largest(n):
    if n == 0:
        return 0
    
    val = largest(n // 10)
    if n % 10 > val:
        return n % 10
    else:
        return val


def smallest(n):
    if n == 0:
        return 0
    
    val = largest(n // 10)
    if n % 10 < val:
        return n % 10
    else:
        return val


def sum(n):
    if n == 0:
        return 0
    
    return n + sum(n - 1)