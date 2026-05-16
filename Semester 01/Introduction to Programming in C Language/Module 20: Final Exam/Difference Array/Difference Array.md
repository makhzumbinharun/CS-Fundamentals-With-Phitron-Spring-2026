Problem Statement

You will be given an array A and the size of that array N. You need to make a copy of this array named B. Then sort the array B in ascending order.

After that, you need to make another array C, where each index i (0 <= i < N) of array C is the absolute difference between array A[i] and B[i].

That means,

C[0] = |A[0] - B[0]|
C[1] = |A[1] - B[1]|
C[2] = |A[2] - B[2]|
.....
.....
C[N-1] = |A[N-1] - B[N-1]|
Here, || means the absolute value. After making the array C, print that array.

Input Format

First line will contain T, the number of test cases.
First line of each test case will contain N.
Second line of each test case will contain the array A.
Constraints

1 <= T <= 100
1 <= N <= 1000
0 <= A[i] <= 1000
Output Format

Output the array C.
Sample Input 0

2
5
5 4 3 2 1
6
2 4 5 6 5 1
Sample Output 0

4 2 0 2 4 
1 2 1 1 0 5 
Explanation 0

In the first test case, A=[5,4,3,2,1], B=[1,2,3,4,5], so array C=[|5-1|,|4-2|,|3-3|,|2-4|,|1-5|]
In the second test case, A=[2,4,5,6,5,1], B=[1,2,4,5,5,6], so array C=[|2-1|,|4-2|,|5-4|,|6-5|,|5-5|,|1-6|]
