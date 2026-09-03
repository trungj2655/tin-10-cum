---- MODULE MC ----
EXTENDS TwoPhase, TLC

\* MV CONSTANT declarations@modelParameterConstants
CONSTANTS
A_r1, A_r2, A_r3
----

\* MV CONSTANT definitions RM
const_178797142687519000 == 
{A_r1, A_r2, A_r3}
----

\* SYMMETRY definition
symm_178797142687520000 == 
Permutations(const_178797142687519000)
----

=============================================================================
\* Modification History
\* Created Sat Aug 29 09:43:46 ICT 2026 by Admin
