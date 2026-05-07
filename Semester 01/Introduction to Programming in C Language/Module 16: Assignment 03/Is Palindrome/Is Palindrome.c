#include <stdio.h>
#include <string.h>

int is_palindrome(char s[]) {
    int len = strlen(s);
    int start = 0;
    int end = len - 1;

    while (start < end) {
        if (s[start] != s[end]) {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

int main() {
    char s[1001];

    if (scanf("%s", s) != 1) return 0;

    int result = is_palindrome(s);

    if (result ==1) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}
