n = 10

for i in range(n, 0, -1):
    print(i)
print("Done\n\n")


def countdown(k):
    if k < 1: print("Done")
    else:
        print(k)
        countdown(k - 1)
        
countdown(n)