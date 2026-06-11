#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, word;
    getline(cin, S);

    stringstream ss(S);
    bool found = false;

    while (ss >> word) {
        if (word == "Jessica") {
            found = true;
        }
    }

    cout << (found ? "YES" : "NO");

    return 0;
}
