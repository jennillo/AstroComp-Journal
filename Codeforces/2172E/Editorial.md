### Problem
https://codeforces.com/contest/2172/problem/E
<details>
    <summary>Observations</summary>
Observe that $x + y$ always same as the length of $n$. So, we just have to check $x$.
</details>
<details>
    <summary>Solution</summary>
Calculate the $j$-th and the $k$-th permutation first. Then, use pointer to check one by one each index. If the value are same then increase $x$. Last, we can calculate $y$ as length of $n - x$.
</details>

### Time Complexity
$O((j + k)\cdot|n|)$
