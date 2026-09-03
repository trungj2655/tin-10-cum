---- MODULE SimpleProgram2 ---- 
EXTENDS Integers
VARIABLE i, pc

Init == i \in 0..1000 /\ pc = "start"

Next == /\ pc = "start"
        /\ i \in 0..1000
        /\ pc' = "done"
        /\ i' = i + 1

====