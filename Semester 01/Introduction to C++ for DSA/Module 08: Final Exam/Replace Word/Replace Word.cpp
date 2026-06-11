#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string S, X;
        cin >> S >> X;

        int n = S.size(), m = X.size();

        for (int i = 0; i < n; i++) {
            bool check = true;

            for (int j = 0; j < m; j++) {
                if (i + j >= n || S[i + j] != X[j]) {
                    check = false;
                    break;
                }
            }

            if (check) {
                cout << "#";
                i += m - 1;
            } else {
                cout << S[i];
            }
        }

        cout << "\n";
    }

    return 0;
}
