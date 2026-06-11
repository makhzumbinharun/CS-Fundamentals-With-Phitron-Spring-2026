#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    getline(cin, S);

    string word = "";
    bool found = false;

    for (int i = 0; i <= S.size(); i++) {
        if (i == S.size() || S[i] == ' ') {
            if (word == "Jessica") {
                found = true;
            }
            word = "";
        }
        else {
            word += S[i];
        }
    }

    cout << (found ? "YES" : "NO");

    return 0;
}
