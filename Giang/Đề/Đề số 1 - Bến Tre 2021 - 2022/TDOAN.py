input_values = list(map(int, open('TDOAN.INP', 'r', encoding='utf-8').read().split()))
array_length = input_values[0]
value = input_values[1]
numbers = input_values[2:]

def tdoan(numbers, target, output_file=None):
    left = 0
    current_sum = 0
    best_start = None
    best_length = float("inf")

    for right, number in enumerate(numbers):
        current_sum += number
        
        while left <= right and current_sum >= target:
            if current_sum == target:
                length = right - left + 1
                if length < best_length:
                    best_start = left
                    best_length = length

            current_sum -= numbers[left]
            left += 1
            print(left, right, current_sum)

    if best_start is None:
        print(0, file=output_file)
    else:
        print(best_start + 1, file=output_file) # one-based index
        print(best_length, file=output_file)

with open('TDOAN.OUT', 'w', encoding='utf-8') as output_file: tdoan(numbers, value)
