def sum_arr(arr):
    if len(arr) < 2:
        return arr[0]
    
    return arr[0] + sum_arr(arr[1:])


def arr_symetry(arr):
    if len(arr) < 2:
        return True
    
    inner_symetry = arr_symetry(arr[1:len(arr) - 1])
    
    return arr[0] == arr[len(arr) - 1] and inner_symetry




