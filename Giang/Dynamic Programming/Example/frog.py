def frog(h):
    l = len(h)
    c = h[0] # current height

    if l < 4:
        if l < 3:
            if l < 2:
                return 0
            else:
                return abs(h[1] - c)
        else:
            return abs(h[2] - c)

    j1 = abs(h[1] - c)
    j2 = abs(h[2] - c)
    i = len(dp) - len(h)
    dp[i] = j2 - j1
    if dp[i] > 0:
        return j1 + frog(h[1:])
    else:
        return j2 + frog(h[2:])

with open('frog_output.txt', 'w') as out:
    inp = open('frog_input.txt', 'r')
    h = list(map(int, inp.read().split()))
    dp = [0] * len(h)
    
    print(frog(h), file=out)
    

    

