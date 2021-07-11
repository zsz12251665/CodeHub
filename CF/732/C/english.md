# CF 732C

## Problem

- [Virtual Judge](https://vjudge.net/problem/CodeForces-732C)
- [Luogu](https://www.luogu.com.cn/problem/CF732C)
- [Codeforces](https://codeforces.com/problemset/problem/732/C)

## Solution

Let's calculate how many meals Vasiliy might have for different time he arrived and left. The following sheets showed the result if he stayed $n$ (we treat arriving after supper the same situation as arriving before breakfast the next day).

|   Arrival time   |  Departure time  |  $b$  |  $d$  |  $s$  |
| :--------------: | :--------------: | :---: | :---: | :---: |
| Before breakfast | Before breakfast | $n-1$ | $n-1$ | $n-1$ |
| Before breakfast |  Before dinner   |  $n$  | $n-1$ | $n-1$ |
| Before breakfast |  Before supper   |  $n$  |  $n$  | $n-1$ |
|  Before dinner   | Before breakfast | $n-2$ | $n-1$ | $n-1$ |
|  Before dinner   |  Before dinner   | $n-1$ | $n-1$ | $n-1$ |
|  Before dinner   |  Before supper   | $n-1$ |  $n$  | $n-1$ |
|  Before supper   | Before breakfast | $n-2$ | $n-2$ | $n-1$ |
|  Before supper   |  Before dinner   | $n-1$ | $n-2$ | $n-1$ |
|  Before supper   |  Before supper   | $n-1$ | $n-1$ | $n-1$ |

From the table you can find that the difference between the number of meals is at most $1$. So suppose <data value="v{b}o{&ge;}v{d}o{&ge;}v{s}"></data> (if not you can swap them because the order does not matter in this problem), then the answer will be <data value="o{(}o{max}o{(}v{b}o{-}c{1}o{-}v{d}o{,}c{0}o{)}o{+}o{max}o{(}v{b}o{-}c{1}o{-}v{s}o{,}c{0}o{)}o{)}"></data> (Vasiliy should have at least <data value="o{(}v{b}o{-}c{1}o{)}"></data> dinners and suppers).

## Code

- [Solution](CF.732C.0.cpp)
