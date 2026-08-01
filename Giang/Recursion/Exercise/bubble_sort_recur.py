def bubble_sort(n):
    if len(n) < 2:
        return n
    
    l = len(n) - 1
    
    n = inner_sort(n, l)
    
    smaller_list = n[:l]
    n = bubble_sort(smaller_list) + [(n[l])]
            
    return n

def inner_sort(n, l):
    for i in range(l):
        if n[i + 1] < n[i]:
            n[i], n[i + 1] = n[i + 1], n[i]
            
    return n

print(bubble_sort([5, 4, 3, 2, 1]))