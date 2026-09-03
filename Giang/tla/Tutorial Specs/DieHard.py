big = 0
small = 0

while big != 4:
    pass

# small = 3
# big = 5
# small = 0
# big = 0

def SmallToBig():
    if big + small <= 5:
        big = big + small
        small = 0
    else:
        big = 5
        small = small - (5 - big)

def BigToSmall():
    if big + small <= 3:
        small = big + small
        big = 0
    else:
        small = 3
        big = big - (3 - small)