#include <stdio.h>

int main() {
    int N;
    if (scanf("%d", &N) != 1) return 0;

    if (N == 1) {
        printf("1\n");
        return 0;
    }

    for (int i = 1; i <= N; i++) {
        for (int s = 0; s < (N - i); s++) {
            printf(" ");
        }

        for (int j = i; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
   
    return 0;
}
