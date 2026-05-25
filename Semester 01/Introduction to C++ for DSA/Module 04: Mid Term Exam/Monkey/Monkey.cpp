#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    while (getline(cin, s)) {
        int freq[26] = {0}; 

        for (char ch : s) {
            if (ch >= 'a' && ch <= 'z') {
                freq[ch - 'a']++;
            }
        }

        for (int i = 0; i < 26; i++) {
            while (freq[i] > 0) {
                cout << (char)(i + 'a');
                freq[i]--;
            }
        }
        cout << "\n";
    }

    return 0;
}
