---- MODULE prefix_sum_arr ----

EXTENDS Integer, Natural

INT arr = {1, 9, 2, 3} \in Integer
INT l = len(arr) \in Natural

INT s = ([0] * l) \in Integer
s[0] = arr[0]

INT i = 1 \in Natural

/\ i < l 
/\ i* = i + 1
/\ s[i]* = (arr[i] + s[i - 1])

====