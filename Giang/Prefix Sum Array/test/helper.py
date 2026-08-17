class array:
    def __init__(self, arr, const = 0):
        self.arr = arr
        self.len = len(arr)

        self.sum = [0] * (self.len + 1)
        self.sum[0] = const
        for i in range(1, self.len + 1):
            self.sum[i] = self.arr[i - 1] + self.sum[i - 1]

        self.diff = [0] * self.len
        self.diff[0] = self.arr[0]
        for i in range(1, self.len):
            self.diff[i] = self.arr[i] - self.arr[i - 1]

class array_2d():
    def __init__(self, arr, const = 0):
        self.arr = arr
        self.column_count = len(self.arr)
        self.row_count = len(self.arr[0])

        print(self.column_count)
        print(self.row_count)

        self.sum = [[0] * (self.column_count  + 2) for i in range(self.row_count+ 2)]

        for i in range(1, self.column_count):
            for j in range(1, self.row_count):
                self.sum[i][j] = self.sum[i - 1][j] + self.sum[i][j - 1] + self.arr[i][j] - self.sum[i - 1][j - 1]

        print(self.sum)

    def rec(self): pass

    