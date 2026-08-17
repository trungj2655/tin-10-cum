input_values = list(map(int, open('TDOAN.INP', 'r', encoding='utf-8').read().split()))
array_length = input_values[0]
value = input_values[1]
numbers = input_values[2:]

def tdoan(numbers, output_file=None):
    for slice_length in range(1, array_length + 1):
        for slice_index in range(array_length - slice_length + 1):
            if sum(numbers[slice_index: slice_index + slice_length]) == value:
                print(slice_index + 1, file=output_file) # relative index
                print(slice_length, file=output_file)
                return

    print(0, file=output_file)

def tdoan_test(numbers, target, output_file=None):
    left = 0
    current_sum = 0
    best_start = None
    best_length = float("inf")

    for right, number in enumerate(numbers):
        current_sum += number
        print("------")
        print(current_sum)
        
        while left <= right and current_sum >= target:
            if current_sum == target:
                length = right - left + 1
                if length < best_length:
                    best_start = left
                    best_length = length

            current_sum -= numbers[left]
            left += 1
            print(left, right, current_sum)
        print("------\n")

    if best_start is None:
        print(0, file=output_file)
    else:
        print(best_start + 1, file=output_file)  # one-based index
        print(best_length, file=output_file)


'''
[a, b, c]

((0, a), (1, b), (2, c))

'''

with open('TDOAN.OUT', 'w', encoding='utf-8') as output_file: tdoan_test(numbers, value)
