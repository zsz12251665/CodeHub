# HDU 3549

## 描述

- [Virtual Judge](https://vjudge.net/problem/HDU-3549)
- [HDU](http://acm.hdu.edu.cn/showproblem.php?pid=3549)

## 解法

正如题目所描述的，这道题是一道网络流的最大流模板题。该问题共有4种逐步改进的算法。

### Ford-Fulkerson

第一种是 Ford-Fulkerson 算法。Ford-Fulkerson 基于这样一个思想：我们可以不断增加新流程，直到没有可用流程为止。代码使用 <abbr title="深度优先搜索">DFS</abbr> 作为搜索函数。有时，目前发现的流可能与最大流不同，因此我们可能需要还原某些流（或其中一部分）。因此，我们需要建立反向边以还原流。与正向边不同，反向边的容量默认为0。当找到增广路时，从其通过的边的容量中减去它，然后将其添加到其反向边中，以确保两边流量总和不变。

注：这里直接使用DFS并不是个好主意。DFS版本的Ford-Fulkerson是本题唯一一份没有通过测试的代码。它 <abbr title="超出时间限制">TLE</abbr> 了。

### Edmonds-Karp

第二种是 Edmonds-Karp 算法。Edmonds-Karp 与 Ford-Fulkerson 基于相同的思想。（实际上，Ford-Fulkerson 是一种方法而不是一个真正的算法）。唯一的改进之处在于 Edmonds-Karp 使用了 <abbr title="广度优先搜索">BFS</abbr> 作为搜索函数。然而由于 BFS 拥有非递归过程的稳定的时间复杂度，它比 DFS 好得多。Edmonds-Karp 的时间复杂度为 $\operatorname{O}(n m^2)$，其中 $n$ 是点的数目，$m$ 是边的数目（该定义亦适用于下面介绍的其它算法）。每次跑 BFS 时，至少有一条边的流量被用尽。因此 $\operatorname{O}(n m)$ 的 BFS 最多需要被执行 $\operatorname{O}(m)$ 次。

### Dinic

第三种是 Dinic 算法。Dinic 有着 $\operatorname{O}(n^2m)$ 的时间复杂度，效率更高。我们知道有些流量相互独立，因此与 BFS 每次找一条增广路不同，Dinic 在一次搜索中同时找多条增广路。它通过一个从汇点开始的 BFS 来把图分成若干层。然后用一个从高层向低层跃进的 DFS 来找增广路。然而点的层级在某些边流量用尽后可能会改变。因此当 DFS 找不到新的增广路时，我们需要重新跑一次 BFS 来更新层级，直到源点至汇点没有办法通过未用尽的边抵达。

我觉得我们还有另一种方法来理解 Dinic。它改进了 Ford-Fulkerson 中 DFS 的搜索方式。我们的搜索不再盲目，从汇点出发的 BFS 给全图划分层次，指出了从任意点至汇点的最短路，可以指引 DFS 的方向。DFS 和 BFS 部分均需要 $\operatorname{O}(n m)$ 运行。每次找不到增广路都意味着连到某点的所有边流量均被用尽。途中只有 $n$ 个点，因此时间复杂度为 $\operatorname{O}(n^2m)$。

Dinic 有一种优化，叫做当前弧优化。当你通过 DFS 找到了增广路并开始了一次新的 DFS 时，你不必从头开始。你可以从通过记录每个点最后访问的边，从上一条增广路开始搜索。你也可以先不返回当前流，而是带着剩余流量继续搜索其它边。

### <abbr title="改进版最短增广路">ISAP</abbr>

最后一个是 ISAP 算法。ISAP 和 Dinic 有着同样的时间复杂度（类似于从 Bellman-Ford 到 <abbr title="更快的最短路算法">SPFA</abbr> 的改进），但是节省了跑 BFS 的时间。实际上，在 Dinic 执行一次 BFS 后，只有很少的点改变了层级。ISAP 设法改进了 DFS 部分，使得 BFS 只需要在初始化层级时运行一次即可。以下是其在 DFS 中更改点的层级的方式：当你到达一个点并发现没有新的增广路通过该点时，就可以更新其层级了。根据第二种理解 Dinic 的方式，我们知道层级代表着点到汇点的距离。因此我们可以枚举其所有邻近点（有边与其直接相连），用最小层级加1来更新其层级。

ISAP 也有一种优化方式，叫做 <abbr title="间隙">GAP</abbr> 优化。由于 ISAP 在跑 DFS 时 更新层级，因此可能出现明明已经没有增广路了，但 ISAP 直到源点的层级足够大才注意到汇点已经不可达。因此我们记录每层点的数量。当间隙出现（某一层没有点）时，我们即可知道源点与汇点不连通了。


## 代码

- [Ford-Fulkerson](HDU.3549.0.cpp)
- [Edmonds-Karp](HDU.3549.1.cpp)
- [Dinic](HDU.3549.2.cpp)
- [ISAP](HDU.3549.3.cpp)
