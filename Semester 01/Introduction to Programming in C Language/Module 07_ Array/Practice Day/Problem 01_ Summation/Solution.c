#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int N;
    scanf("%d", &N);
 
    long long A[N];
    for (int i = 0; i < N; i++) {
        scanf("%lld", &A[i]);
    }
 
    long long sum = 0;
    for (int i = 0; i < N; i++) {
        sum += A[i];
    }
 
    sum = llabs(sum);
 
    printf("%lld\n", sum);
    return 0;
}
