### Problem
https://cses.fi/problemset/task/1730
<details>
    <summary>Observations</summary>
Use grundy numbers! If the grundy number is not zero you will win.
</details>
<details>
    <summary>Solution</summary>
To do that, we calculate $x$ the xor sum of heap sizes. If $x = 0$, then the first person is in lose position. This condition make the second person win.
</details>

### Time Complexity
$O(N)$
