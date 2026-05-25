#include <bits/stdc++.h>

using namespace std;

long long* sort_it(int n) {
    long long* a = new long long[n];
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a, a + n, greater<long long>());
    
    return a;
}

int main() {

    int N;
    if (cin >> N) {
        long long* sorted_array = sort_it(N);
        
        for (int i = 0; i < N; i++) {
            cout << sorted_array[i] << (i == N - 1 ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}
