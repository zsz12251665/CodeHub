# NOIP 2012J1

## Description

- [Luogu](https://www.luogu.com.cn/problem/P1075)
- [Vijos](https://www.vijos.org/p/1786)

## Solution

This problem is very simple. You just need to find the small prime, and you'll get the big prime. So the solution will talk about how to check whether the integer is a prime.

We need to try all the integers from <data value="c{2}"></data> to <data value="o{&lfloor;}o{&radic;}t{v{n}}o{&rfloor;}"></data>. Why <data value="o{&radic;}t{v{n}}"></data>? That is because if there is a division $d$ which is bigger than <data value="o{&radic;}t{v{n}}"></data>, then <data value="f{v{n}l{}v{d}}"></data> must be an integer, and it must be smaller than <data value="o{&radic;}t{v{n}}"></data>. If both <data value="f{v{n}l{}v{d}}"></data> and $d$ are bigger than <data value="o{&radic;}t{v{n}}"></data>, then <data value="f{v{d}o{}v{n}l{}v{d}}"></data>, which equals $n$, must be bigger than <data value="o{(}o{&radic;}t{v{n}}o{)}p{2}"></data>, which equals $n$ too. That is impossible. So you can check whether the integer $n$ is a prime by trying all the integers from <data value="c{2}"></data> to <data value="o{&lfloor;}o{&radic;}t{v{n}}o{&rfloor;}"></data>.

P. S. In fact, we don't need to check whether the number is a prime. Because the problem have promised that $n$ will always be the product of two primes. So we just need to find the small number, and output their quotient.

## Code

- [Solution](NOIP.2012J1.0.cpp)
