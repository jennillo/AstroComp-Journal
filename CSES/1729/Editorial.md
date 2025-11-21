### Problem
https://cses.fi/problemset/task/1729
<details>
    <summary>Observations</summary>
Use simple dynamic programming!
</details>
<details>
    <summary>Solution</summary>
Iterate $i$ from $1$ to $N$. First, let's define $x$ as each elements of $p$. Check if there is losing state on any $i - x$, then this $i$ is a winning position. Otherwise, we are in losing position
</details>

### Time Complexity
O(Nk)
