### Problem
https://cses.fi/problemset/task/1660
<details>
    <summary>Observations</summary>
We want to check all possible sums with range $[l, r]$ in constraint $(1 <= l <= r <= N)$. But, if range $[l, r]$ is not possible, then range $[l, r + 1]$ is not possible too. 
</details>
<details>
    <summary>Solution</summary>
Use sliding window with two variables initialize to $0$. If sum of range $[l, r]$ is bigger than $x$, then increase the $l$, else increase the $r$.
</details>

### Time Complexity
O(N)
