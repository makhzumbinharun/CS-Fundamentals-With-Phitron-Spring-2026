Question Analysis:

A singly linked list is given in the question. I need to remove all duplicate values from the linked list and print the final linked list.

The process says that for every node, I have to traverse all the remaining nodes after it. If any node has the same value as the current node, I will delete that node. This process continues until every node has been checked.

Observation:

The first occurrence of every value will remain in the linked list.

Whenever a duplicate value is found later in the list, that node will be deleted.

Finally, the linked list will contain only unique values in their original order.

Testcase Analysis:

Input:

1 2 4 2 3 5 1 4 5 2 6 1 -1

Initially the linked list is:

1 → 2 → 4 → 2 → 3 → 5 → 1 → 4 → 5 → 2 → 6 → 1
Step 1:

Current node = 1

Delete all other nodes having value 1.

1 → 2 → 4 → 2 → 3 → 5 → 4 → 5 → 2 → 6
Step 2:

Current node = 2

Delete all other nodes having value 2.

1 → 2 → 4 → 3 → 5 → 4 → 5 → 6
Step 3:

Current node = 4

Delete all other nodes having value 4.

1 → 2 → 4 → 3 → 5 → 5 → 6
Step 4:

Current node = 3

No duplicate is found.

Step 5:

Current node = 5

Delete the remaining 5.

1 → 2 → 4 → 3 → 5 → 6
Step 6:

Current node = 6

No duplicate is found.

Final Linked List (Output):
1 2 4 3 5 6
