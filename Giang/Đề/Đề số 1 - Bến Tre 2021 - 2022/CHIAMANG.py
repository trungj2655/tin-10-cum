input_vales = list(map(int, open('CHIAMANG.INP', 'r', encoding='utf-8').read().split()))
array_length = input_vales[0]
numbers = input_vales[1:]

'''

sum(arr[:i]) == sum(arr[i:])

'''

def chiamang(numbers, output_file=None):
    total_sum = sum(numbers)
    left_sum = 0

    for split_index in range(1, array_length):
        left_sum += numbers[split_index - 1]
        right_sum = total_sum - left_sum

        if left_sum == right_sum:
            print(split_index, file=output_file)
            return

    print(0, file=output_file)

with open("CHIAMANG.OUT", 'w', encoding='utf-8') as output_file: chiamang(numbers, output_file)