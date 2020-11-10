The statement is If expression E has n operator (let's take "+" operator) occurrences, then E has n + 1 operands. We prove it by complete induction on n, where n is greater than or equal to zero.
Basis is S(0) = 0 + 1 = 1 operands; 

Induction

In strong induction we assume that all of S(0), S(1), . . . , S(n) are true to prove S(n + 1). Let's prove S(n + 1) is true.

1) We represent expression E in terms of operators S(n + 1) = F "+" G

2) We represent F as n1 operators, G as a n2 operators. The total number of operators in statement E is n1 + n2 = n + 1

3) According to inductive hypothesis we know that each n1 and n2 are true (because they are greater than or equal to zero and less than or equal to n). Therefore F has n1 + 1 operands and G has n2 + 1 operands.

4) We have proved that statement E has n + 1 operators and n1 + 1 + n2 + 1 = n + 2 operands

5) We are done.
