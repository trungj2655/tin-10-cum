---- MODULE TDOAN ----

CONSTANT numbers, target
VARIABLE left, right, length, current_sum, best_start, best_length

Init == numbers = <<1, 2, 3, 6>>
     /\ target = 6
     /\ length = 0
     /\ current_sum = 0
     /\ best_start = 0
     /\ best_length = 99999999



====