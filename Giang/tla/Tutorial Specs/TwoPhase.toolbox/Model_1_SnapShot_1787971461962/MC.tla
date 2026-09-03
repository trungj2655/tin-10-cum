---- MODULE MC ----
EXTENDS TwoPhase, TLC

\* MV CONSTANT declarations@modelParameterConstants
CONSTANTS
r1, r2, r3
----

\* MV CONSTANT definitions RM
const_178797145889029000 == 
{r1, r2, r3}
----

\* SYMMETRY definition
symm_178797145889030000 == 
Permutations(const_178797145889029000)
----

=============================================================================
\* Modification History
\* Created Sat Aug 29 09:44:18 ICT 2026 by Admin
