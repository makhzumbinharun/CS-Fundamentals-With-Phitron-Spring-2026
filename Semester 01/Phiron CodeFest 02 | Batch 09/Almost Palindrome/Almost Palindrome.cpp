#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;

    while (T--){
        string s;
        cin >> s;

        int freq[26] = {0};

        for (char ch : s) freq[ch - 'a']++;

        int oddCount = 0;

        for (int i = 0; i < 26; i++){
            if (freq[i] % 2 != 0)oddCount++;
        }

        if (oddCount <= 1) cout << 0 << endl;
        else  cout << oddCount - 1 << endl;
    }

    return 0;
}
