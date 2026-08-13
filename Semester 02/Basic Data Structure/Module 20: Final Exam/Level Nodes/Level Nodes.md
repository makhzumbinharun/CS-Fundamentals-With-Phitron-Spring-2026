# Level Nodes

## Problem Statement

You will be given a binary tree as input in level order. Also, you will be given a level `L`. You need to print all the node's values in that level from left to right. Assume that the level starts from `0`.

For example:

![Binary Tree](image)

If `L = 2`, then the output for the above tree will be:

```text
40 50 60
Note: If the level L is not a valid level, print Invalid.

Input Format
Input will contain the binary tree in level order. -1 means there is no node available.
The second line will contain the level L.
Constraints
Maximum number of nodes: 10^5
Node's value: 0 <= value <= 10^5
0 <= L <= 10^5
Output Format

Output all the node's values in level L from left to right.

If the level is not valid, output:

Invalid
Sample Input 0
10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
0
Sample Output 0
10
Sample Input 1
10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
1
Sample Output 1
20 30
Sample Input 2
10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
2
Sample Output 2
40 50 60
Sample Input 3
10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
3
Sample Output 3
Invalid
