### Problem
https://cses.fi/problemset/task/1140
<details>
    <summary>Observations</summary>
Use dynamic programming!
</details>
<details>
    <summary>Solution</summary>
Let us define $dp[i]$ as the maximum number of projects that can be taken from index $1$ to $i$. There are two choices, first we take the project or we throw it away. If we throw it, then $dp[i] = dp[i - 1]$ whereas if we take it away then the transition is $dp[i] = dp[j] + p[i]$ where $j$ is the index of the last project whose time does not collide with project- $i$
</details>

### Time Complexity
$O(N \text{ log } N)$
