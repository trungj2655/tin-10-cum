------------------------------ MODULE CHIAMANG ------------------------------
EXTENDS Integers, Sequences

\* Arr is the array read from CHIAMANG.INP (without its leading length).
\* The model configuration supplies a concrete sequence with at least two
\* elements, so each permitted split has a non-empty left and right side.
CONSTANT Arr

ASSUME /\ Arr \in Seq(Int)
       /\ Len(Arr) > 1

N == Len(Arr)
\* This matches Python's range(1, arr_len).
Splits == 1..(N - 1)

\* A recursive sum keeps the model independent of any implementation-specific
\* library operator.  SumSeq(<<>>) is 0, just as Python's sum([]) is 0.
RECURSIVE SumSeq(_)
SumSeq(s) ==
    IF Len(s) = 0
    THEN 0
    ELSE s[1] + SumSeq(SubSeq(s, 2, Len(s)))

LeftSum(i) == SumSeq(SubSeq(Arr, 1, i))
RightSum(i) == SumSeq(SubSeq(Arr, i + 1, N))
EqualSplit(i) == LeftSum(i) = RightSum(i)

\* pc is the Python loop variable i.  finished and result represent the point
\* at which CHIAMANG.OUT has been written.
VARIABLES pc, finished, result

vars == <<pc, finished, result>>

Init ==
    /\ pc = 1
    /\ finished = FALSE
    /\ result = 0

Next ==
    IF finished THEN
        UNCHANGED vars
    ELSE IF EqualSplit(pc) THEN
        /\ finished' = TRUE
        /\ result' = pc
        /\ UNCHANGED pc
    ELSE IF pc = N - 1 THEN
        /\ finished' = TRUE
        /\ result' = 0
        /\ UNCHANGED pc
    ELSE
        /\ pc' = pc + 1
        /\ UNCHANGED <<finished, result>>

Spec == Init /\ [][Next]_vars

\* These are safety properties for TLC to check.
TypeOK ==
    /\ pc \in Splits
    /\ finished \in BOOLEAN
    /\ result \in (Splits \cup {0})

\* Every position before the current one has already failed the test.
ScanHistory ==
    \A j \in Splits : j < pc => ~EqualSplit(j)

\* Once output is written, it is the first valid split.  If no valid split
\* exists, the program's specified fallback output is 0.
FirstResult ==
    finished =>
        IF \E j \in Splits : EqualSplit(j)
        THEN /\ result \in Splits
             /\ EqualSplit(result)
             /\ \A j \in Splits : j < result => ~EqualSplit(j)
        ELSE result = 0

=============================================================================
