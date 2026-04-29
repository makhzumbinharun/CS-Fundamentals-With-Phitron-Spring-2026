#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    long long A[N];
    for (int i = 0; i < N; i++) {
        scanf("%lld", &A[i]);
    }

    long long s;
    int found = 0;
    scanf("%lld", &s);

    for (int i = 0; i < N; i++) {
        if (A[i] == s) {
            printf("%d\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("-1\n");
    }

    return 0;
}
