https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-09/challenges


Question Analysis:

An array is given in the question. I need to calculate the prefix sum of the array. Then I need to print the prefix sum array in reverse order.

Observation:
First element will stay as it is, then all other elements will be added with the previous ones prefix sum. At last, I will print the prefix sum array in reverse order.

Testcase Analysis:

5
2 4 1 5 3

The prefix sum will be calculated like this -

2
2 + 4 = 6
6 + 1 = 7
7 + 5 = 12
12 + 3 = 15

So, the prefix sum array will be-

2 6 7 12 15

If I print it in reverse order it would be (OUTPUT)

15 12 7 6 2
