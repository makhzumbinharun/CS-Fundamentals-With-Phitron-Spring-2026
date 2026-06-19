You are given T test cases. Each test case consists of a string S containing only lowercase English letters. You can perform the following operations:

Reorder the characters of the string in any way.

Add any lowercase character any number of times at any position.

Your task is to determine the minimum number of characters you need to add to make the string a palindrome.

Note: A palindrome is a string that reads the same forwards and backwards, such as "racecar" or "abba".

Input Format

The first line contains an integer T — the number of test cases.

The next T lines each contain a string S

Constraints

1 ≤ T ≤ 1000

1 ≤ |S| ≤ 1000

The strings consist only of lowercase English letters (a to z).

Output Format

For each test case, print a single integer — the minimum number of characters that need to be added to make the string a palindrome.

Sample Input 0

3
abcd
madame
maam
Sample Output 0

3
1
0
Explanation 0

Test Case 1: "abcd"

You can add "cba" this 3 characters to the end of the string.
The new string becomes: "abcd" + "cba" = "abcdcba". This is a palindrome.
So, the minimum number of characters to add is 3.
Test Case 2: "madame"

You can add "e" to the beginning of the string.
The new string becomes: "e" + "madame" = "emadame". This is a palindrome.
So, the minimum number of characters to add is 1.
Test Case 3: "maam"

You don't need to add any characters.
The string is already a palindrome.
So, the answer is 0.
Sample Input 1

3
race
noon
hello
Sample Output 1

3
0
2
