#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int min = A[0];
    int pos = 1;

    for (int i = 1; i < N; i++) {
        if (A[i] < min) {
            min = A[i];
            pos = i + 1;
        }
    }

    printf("%d %d\n", min, pos);
    return 0;
}
