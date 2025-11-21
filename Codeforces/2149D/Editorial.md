### Problem
https://codeforces.com/contest/2149/problem/D
<details>
    <summary>Observations</summary>
We need to create two separate cases: if $a$ should be a continuous block or if $b$ should be a continuous block. 
Then, how do we calculate the cost of $a$ or $b$? This problem can also be considered as finding the minimum distance from a given number of points to the midpoint.
</details>
<details>
    <summary>Solution</summary>
Let's store all the positions of character $a$ in a vector. Similarly, for character $b$. Then define a function that calculates the cost as $(abs(v[i] - med) - abs(i - mid))$ where $med$ is the midpoint value of vector $v$ and $mid$ is the midpoint index.
</details>

### Time Complexity
$O(N)$
