#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> A(N);
    
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    
    cout << "\n";

    reverse(A.begin(), A.end());

    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << "\n";

    return 0;
}
