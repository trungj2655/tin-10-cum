-------- MODULE MESSAGES --------

EXTENDS Integers, Sequences

CONSTANT Message, Channel

ASSUME /\ Message \in Seq(Int)
       /\ Len(Message) > 1
       /\ Channel \in Seq(Int)
       /\ Len(Channel) > 1

VARIABLES pc

Init ==
    /\ pc = 1
    /\ Message = <<1, 1, 1, 1>>
    /\ Channel = <<1, 1, 1, 2>>

Next ==  /\ pc < 10
         /\ pc' = pc + 1

====