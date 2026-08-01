
def F(n):
    if n > 0:
        print(n, file=fhandle)
        F(n-1)

with open("words.txt", 'w', encoding="utf-8") as fhandle:
    F(3)