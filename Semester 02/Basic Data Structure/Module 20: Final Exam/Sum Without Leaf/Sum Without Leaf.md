# Sum of Non-Leaf Nodes

## Problem Statement

You will be given a binary tree as input in level order. You need to output the sum of all node's values in that tree except the leaf nodes.

For example:

![Binary Tree](image)

The output for the above tree will be: `60`

## Input Format

Input will contain the binary tree in level order. `-1` means there is no node available.

## Constraints

- Maximum number of nodes: `10^5`
- Node's value: `0 <= value <= 10^5`

## Output Format

Output the total sum of the tree except the leaf nodes.

## Sample Input 0

```text
10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1

Sample Output 0
60
