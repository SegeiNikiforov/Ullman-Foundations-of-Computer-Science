# Ullman-Foundations-of-Computer-Science
Exercises of Ullman Foundations of Computer Science book

// *******************************************************************************

Exercise 2.2.1

a) 6, 8, 14, 17, 23 has 10 comparisons and 0 swapings

b) 17, 23, 14, 6, 8 has 10 comparisons and 2 swapings

c) 23, 17, 14, 8, 6 has 10 comparisons and 2 swapings

// *******************************************************************************

Exercise 2.2.2

The minimun number of comparisons is 0. The maximum number of comparisons is n(n + 1) / 2

The minimun number of swaps is 0. The maximum number of swaps is n

// *******************************************************************************

Exercise 2.2.5: What does selection sort do if all elements are the same?

It does comparisons but doesn't do swaps

// *******************************************************************************

Exercise 2.2.11: Use the Σ and π notations described at the beginning of this chapter to
express the following.

a) The sum of the odd integers from 1 to 377

b) The sum of the squares of the even integers from 2 to n (assume that n is even)

c) The product of the powers of 2 from 8 to 2k

a)

377

Σ     f(i)

i%2=1

b) 

n

Σ     f(i*i)

i%2=0

c)

2000

π     f(2^i)

i=8
