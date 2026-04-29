#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < N; i++) {
        A[i] = (A[i] < 0) ? 2 : (A[i] > 0) ? 1 : A[i];
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
