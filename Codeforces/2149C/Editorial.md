### Problem
https://codeforces.com/contest/2149/problem/C
<details>
    <summary>Observations</summary>
The number $k$ must not appear in array $a$. All numbers smaller than $k$ must also appear at least once.
</details>
<details>
    <summary>Solution</summary>
If the number $k$ appears then we have to replace it with another number either smaller than k or larger than $k$. If some numbers below k do not appear then we have to take another number that is not needed to be the number i. Let's define $x$ as the number of numbers k that appear in the array and $y$ as the number of numbers below k that have not appeared. Then the answer is $max(x, y)$
</details>

### Time Complexity
O(N log N)
