---- MODULE MC ----
EXTENDS TwoPhase, TLC

\* MV CONSTANT declarations@modelParameterConstants
CONSTANTS
r1, r2, r3
----

\* MV CONSTANT definitions RM
const_178797139752413000 == 
{r1, r2, r3}
----

\* SYMMETRY definition
symm_178797139752414000 == 
Permutations(const_178797139752413000)
----

=============================================================================
\* Modification History
\* Created Sat Aug 29 09:43:17 ICT 2026 by Admin
