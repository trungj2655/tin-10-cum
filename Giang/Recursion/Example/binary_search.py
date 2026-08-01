def binary_search(arr, value):
    #debug
    print(arr) 
    
    arr_len = len(arr)
    if arr_len < 2:
        if value == arr[0]: return True
        else: return False
    
    half_len = arr_len // 2
    if value == arr[half_len]:
        return True
    if value < arr[half_len]:
        found = binary_search(arr[:half_len], value)
    else:
        found = binary_search(arr[half_len:], value)
    
    return found

n = 4
l = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]
if binary_search(l, n):
    print(f"Found {n} in {l}")
else:
    print(f"{n} not found in {l}")