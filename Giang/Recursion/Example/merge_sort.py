def merge_sort(arr):
    arr_len = len(arr)
    if arr_len < 2:
        return arr
    half_len = arr_len // 2
    sx_left  = merge_sort(arr[: half_len])
    sx_right = merge_sort(arr[half_len :])
    
    return merge(sx_left, sx_right)


def merge(left, right):
    value = []
    empty_left, empty_right  = len(left) < 1, len(right) < 1
    while not(empty_left or empty_right):
        left_val, right_val = left[0], right[0]
        if left_val < right_val:
            value.append(left_val)
            left.pop(0)
        else:
            value.append(right_val)
            right.pop(0)
        
        empty_left, empty_right  = len(left) < 1, len(right) < 1
    else:
        if empty_left:
            value.extend(right)
        else:
            value.extend(left)
        
    return value

        
print(merge_sort([9, 7, 8, 5, 1, 4, 2, 3, 6]))
        
