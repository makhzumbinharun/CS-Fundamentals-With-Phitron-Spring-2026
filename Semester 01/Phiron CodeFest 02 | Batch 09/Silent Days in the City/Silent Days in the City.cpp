#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    int A[N + 1];

    for (int i = 1; i <= N; i++)cin >> A[i];

    int prefix[N + 1] = {0};

    for (int i = 2; i < N; i++)   {
        prefix[i] = prefix[i - 1];

        if (A[i] < A[i - 1] && A[i] < A[i + 1])prefix[i]++;
    }

    prefix[N] = prefix[N - 1];

    int Q;
    cin >> Q;

    while (Q--)    {
        int L, R;
        cin >> L >> R;

        cout << prefix[R] - prefix[L - 1] << endl;
    }

    return 0;
}
