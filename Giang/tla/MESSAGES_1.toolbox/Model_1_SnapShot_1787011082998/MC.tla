---- MODULE MC ----
EXTENDS MESSAGES, TLC

\* CONSTANT definitions @modelParameterConstants:0Channel
const_178701108095026000 == 
<<1, 1, 1, 1>>
----

\* CONSTANT definitions @modelParameterConstants:1Message
const_178701108095027000 == 
<<1, 1, 1, 1>>
----

\* INIT definition @modelBehaviorNoSpec:0
init_178701108095028000 ==
FALSE/\pc = 0
----
\* NEXT definition @modelBehaviorNoSpec:0
next_178701108095029000 ==
FALSE/\pc' = pc
----
=============================================================================
\* Modification History
\* Created Tue Aug 18 06:58:00 ICT 2026 by Admin
