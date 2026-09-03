---- MODULE DieHard ----
EXTENDS Integers
VARIABLE small, big

TypeOK == small \in 0..3 /\ big \in 0..5

Init == small = 0 /\ big = 0

FillSmall == /\ small' = 3
             /\ big' = big
             
FillBig == /\ big' = 5
           /\ small' = small
           
SmalltoBig == /\ big + small <= 5
              /\ big' = big + small
              /\ small' = 0
              \/ (big' = 5 - small
              /\ small' = 3 - (5 - small))
              
BigtoSmall == /\ big + small <= 3
              /\ small' = big + small
              /\ big' = 0
              \/ (small' = 3 - big /\ big' = 5 - (3 - small))
       
EmptySmall == /\ small' = 0
              /\ big' = big
              
EmptyBig == /\ big' = 0
            /\ small' = small

Next == /\ FillSmall
        \/ FillBig
        \/ BigtoSmall
        \/ SmalltoBig
        \/ EmptySmall
        \/ EmptyBig

====