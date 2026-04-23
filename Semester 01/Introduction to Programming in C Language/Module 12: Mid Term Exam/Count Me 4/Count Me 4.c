#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a[26] = {0};
    char S[10001];

    scanf("%s", S);

    for (int i = 0; S[i]!='\0'; i++) {
        a[S[i]-'a']++;
        
    }
    for (int i = 0; i < 26; i++) {
        if (a[i] > 0) {
            printf("%c - %d\n", i+'a', a[i]);
        }
    }

    return 0;
}
