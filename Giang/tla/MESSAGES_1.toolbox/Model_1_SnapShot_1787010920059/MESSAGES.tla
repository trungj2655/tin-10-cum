-------- MODULE MESSAGES --------

EXTENDS Integers, Sequences

CONSTANT Message, Channel

ASSUME /\ Message \in Seq(Int)
       /\ Len(Message) > 1
       /\ Channel \in Seq(Int)
       /\ Len(Channel) > 1

Init ==
    /\ Message = <<1, 1, 1, 1>>
    /\ Channel = <<1, 1, 1, 1>>

====