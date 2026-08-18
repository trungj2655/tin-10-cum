-------- MODULE MESSAGES --------

EXTENDS Integers, Sequences

CONSTANT Message, Channel

ASSUME /\ Message \in Seq(Int)
       /\ Len(Message) > 1
       /\ Channel \in Seq(Int)
       /\ Len(Channel) > 1


====