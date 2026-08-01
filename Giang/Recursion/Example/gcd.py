'''
def gcd(a, b):
    while a != b:
        print(a, b)
        if a > b: a = a - b
        else: b = b - a
    return a

print(gcd(20, 4))
'''

def gcd(a, b):
    print(a, b)
    if b == 0:
        return a
    else:
        return gcd(b, a % b)
    
print(gcd(18, 42))