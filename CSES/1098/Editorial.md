### Problem
https://cses.fi/problemset/task/1098/
<details>
    <summary>Observations</summary>
Observe the grundy number is $x \text{ mod } 4$. If the grundy number is not zero first person will win.
</details>
<details>
    <summary>Solution</summary>
To do that, we calculate $x$ the xor sum of heap sizes. If $x = 0$, then the first person is in lose position. This condition make the second person win.
</details>

### Time Complexity
O(N)
