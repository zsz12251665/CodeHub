# POJ 3292

## Description

- [Virtual Judge](https://vjudge.net/problem/POJ-3292)
- [POJ](http://poj.org/problem?id=3292)

## Solution

This is a problem about prime numbers. First of all, I tried the Sieve of Eratosthenes, such an efficient sieve of prime with an $\operatorname{O}(n\log^2{n})$ time complexity. After getting a number $n$, try every pair of H-primes for it. However, it is not fast enough even if replacing it with the Sieve of Euler, an $\operatorname{O}(n)$ sieve.

Later, I realized that if I could preprocess the H-primes, why not preprocess the H-semi-primes at the same time? So that is the solution.

## Code

- [Solution](POJ.3292.0.cpp)
