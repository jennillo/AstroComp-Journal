### Problem
https://codeforces.com/contest/2172/problem/M
<details>
    <summary>Observations</summary>
We are asked to find the shortest distance from each city to city $1$ (the port). Since all paths have weight $1$ and the graph is connected, the most efficient way to find the shortest distance from all cities to city $1$ is to perform a single BFS from city $1$. BFS on an unweighted graph guarantees the shortest distance.
</details>
<details>
    <summary>Solution</summary>
Do BFS from first node (the port) and save the maximum value for each $k$
  
  ```cpp 
  ans[a[u]] = max(ans[a[u]], distance_u)
  ```

</details>

### Time Complexity
$O(N + M)$
