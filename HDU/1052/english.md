# HDU 1052

## Description

- [Virtual Judge](https://vjudge.net/problem/HDU-1052)
- [HDU](http://acm.hdu.edu.cn/showproblem.php?pid=1052)

## Solution

We can use a greedy algorithm to solve this problem. First of all, we can sort all of Tian's horses all of the king's horses. Then we compare Tian's worst horse with the king's worst one. If it is better, than use this horse to defeat that one because it is the most useless one. If Tian's horse is worse than the king's, then use it to have a race with the king's best horse. Of course Tian will lose this race, but the king also waste his best horse on Tian's worst one. If they are equally bad, then we'll compare their best ones. If Tian's is better than the king's, let Tian's best horse defeat the king's best one. Even though Tian's second best might be also better than the king's best one, there will be no difference since both of them is able to beat any horse of the king. If Tian's isn't so good as the king's, then use Tian's worst horse to waste the king's best one because no horse can defeat it. Using the worst horse to waste it can reduce the cost. If the king's horse is as good as Tian's, Tian should also use his worst horse to waste the king's best one. But why?

Let's pick Tian's and the king's worst and best horses out. If there are no more horses, anyhow they choose, the result must be a draw. If they have more horses, Tian can use his second worst horses to beat the king's worst one and use his best horse to beat king's second best horse. It is like Tian let his second worst horses defeat the king's second best one. What a worthy deal!

## Code

- [Solution](HDU.1052.0.cpp)
