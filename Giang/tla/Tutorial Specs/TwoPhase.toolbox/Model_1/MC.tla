---- MODULE MC ----
EXTENDS TwoPhase, TLC

\* MV CONSTANT declarations@modelParameterConstants
CONSTANTS
r1, r2, r3
----

\* MV CONSTANT definitions RM
const_178797156486136000 == 
{r1, r2, r3}
----

\* SYMMETRY definition
symm_178797156486137000 == 
Permutations(const_178797156486136000)
----

=============================================================================
\* Modification History
\* Created Sat Aug 29 09:46:04 ICT 2026 by Admin
