### Problem
https://codeforces.com/problemset/problem/1365/D
<details>
    <summary>Observations</summary>
Try to construct the wall by block all side of bad people.
</details>
<details>
    <summary>Solution</summary>
Let's divide the problem into two parts. First, you have to block four sides for each 'B'. There is four possibility :
  
  1. `G` , Then there is no solution.
  2. `end point`, if the number of goods is $0$ then there is solution. Otherwise, No.
  3. `.`, turn it into '#'
  4. `#`, do nothing

  Second, you have to check whether the end point reachable from all 'G' or no. The simple way is do dfs from the end point and count the number of reachable 'G'.
</details>

### Time Complexity
$O(N \cdot M)$
