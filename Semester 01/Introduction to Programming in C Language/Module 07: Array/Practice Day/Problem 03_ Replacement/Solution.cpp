#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;

    int A[N];
    for (int i = 0; i < N; i++) {
        cin>>A[i];
    }

    for (int i = 0; i < N; i++) {
        A[i] = (A[i] < 0) ? 2 : (A[i] > 0) ? 1 : A[i];
    }

    for (int i = 0; i < N; i++) {
        cout<<A[i]<<" ";
    }

    return 0;
}
