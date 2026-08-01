from time import time

def delta_time(func):
    last_value = time()
    print(last_value)
    
    
    test = func(10 ** 6, "recur")
    
    
    print(time())
    delta = time() - last_value
    print(delta)


#@delta_time   
def f(n, type="recur"):
    '''
    if type == "loop":
       s = 0
       for i in range(1, n + 1, 1):
           s += i
       return s'''
    
    #if type == "recur":
    
    if n == 1: return n
    else: return n + f(n - 1)


last_value = time()
print(f(10 ** 6))
delta = time() - last_value
print(delta)