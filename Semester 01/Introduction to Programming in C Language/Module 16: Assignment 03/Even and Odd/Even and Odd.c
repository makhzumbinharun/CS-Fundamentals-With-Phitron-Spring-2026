#include <stdio.h>

void odd_even() {
    int n;
    if (scanf("%d", &n) != 1) return;

    long long a[n];
    int even = 0;
    int odd = 0;

    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
        
        if (a[i] % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }

    printf("%d %d\n", even, odd);
}

int main() {
    odd_even();
    
    return 0;
}
