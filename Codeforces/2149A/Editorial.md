### Problem
https://codeforces.com/contest/2149/problem/A

<details>
  <summary>Observations</summary>
To ensure that the product $a_1 \cdot a_2 \cdot \dots \cdot a_N$ is positive, every zero must be removed.  
Also, the number of $-1$ values must be even.
</details>
<details>
  <summary>Solution</summary>
$2 \cdot (\text{parity of the number of -1s}) + (\text{number of zeros})$
</details>

### Time Complexity
$O(N)$
