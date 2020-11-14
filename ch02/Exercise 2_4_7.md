Let us prove by induction on n the following statement for all n < 0.

STATEMENT S(n): There are integers a and b (positive, negative, or 0) such that -n = 2a + 3b.

Basis: For n = 1, pick a = 1 and b = -1. Then -1 = 2 × 1 + 3 × (-1)

We assume S(-n) and prove S(-(n + 1)), for any n < 0

By inductive hypothesis we may assume that if -n + 1 = 2a + 3b true, then -(n + 1) = 2a + 3b is true

-(n + 1) = (-n + 1) - 2

-(n + 1) = (2a′ + 3b′) - 2

-(n + 1) = (2a′ - 2) + 3b′

-(n + 1) = 2(a′ - 1) + 3b′

If we then let a = a′ - 1 and b = b′, we have the statement -(n + 1) = 2a + 3b for some integers a and b.
