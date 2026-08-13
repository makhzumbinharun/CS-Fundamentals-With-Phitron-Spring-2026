# Print Outer Tree

## Problem Statement

You will be given a binary tree as input in level order. You need to print the outer side (boundary) of the binary tree.

You need to print the nodes starting from the **leftmost leaf node** and ending at the **rightmost leaf node**.

For example:

![Binary Tree](image)

The output for the above tree will be:

```text
90 40 20 10 30 50 60

Input Format

Input will contain the binary tree in level order. -1 means there is no node available.

Constraints
Maximum number of nodes: 10^5
Node's value: 0 <= value <= 10^5
Output Format

Output the outer part of the binary tree, starting from the leftmost leaf node to the rightmost leaf node.

Sample Input 0
10
20 30
40 70 -1 50
90 110 -1 -1 80 60
-1 -1 -1 -1 100 -1 -1 -1
-1 -1
Sample Output 0
90 40 20 10 30 50 60
Explanation 0

The outer boundary of the binary tree is:

90 → 40 → 20 → 10 → 30 → 50 → 60
Sample Input 1
10
20 30
-1 40 70 50
60 90 -1 -1 80 -1
-1 -1 -1 -1 100 110
-1 -1 -1 -1
Sample Output 1
60 40 20 10 30 50 80 110
Explanation 1

The outer part of the binary tree is:

60 → 40 → 20 → 10 → 30 → 50 → 80 → 110
Sample Input 2
10
-1 20
-1 50
80 -1
-1 -1
Sample Output 2
10 20 50 80
Explanation 2

The tree only has a right side, so the outer boundary is:

10 → 20 → 50 → 80
Sample Input 3
10
20 -1
-1 50
80 -1
-1 -1
Sample Output 3
80 50 20 10
Explanation 3

The tree only has a left side, so the outer boundary is:

80 → 50 → 20 → 10
