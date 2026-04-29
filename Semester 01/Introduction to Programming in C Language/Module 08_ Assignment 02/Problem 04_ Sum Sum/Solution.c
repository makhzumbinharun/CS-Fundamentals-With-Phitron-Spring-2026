#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    int pos=0, neg=0;
    for (int i = 0; i<N; i++) {
        if (A[i]>0) pos+=A[i];
        else if(A[i]<0) neg+=A[i];
    }
    printf("%d %d", pos, neg);
    return 0;
}
