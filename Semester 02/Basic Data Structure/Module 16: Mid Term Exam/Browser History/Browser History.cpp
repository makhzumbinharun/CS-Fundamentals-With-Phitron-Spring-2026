#include <bits/stdc++.h>
using namespace std;

int main(){
    list<string> browser;

    string s;
    while (cin >> s && s != "end") {
        browser.push_back(s);
    }

    auto cur = browser.begin();

    int q;
    cin >> q;

    while (q--) {
        string command;
        cin >> command;

        if (command == "visit") {
            string address;
            cin >> address;

            bool found = false;

            for (auto it = browser.begin(); it != browser.end(); it++) {
                if (*it == address) {
                    cur = it;
                    cout << *cur << endl;
                    found = true;
                    break;
                }
            }

            if (!found) cout << "Not Available" << endl;
        }
        else if (command == "next") {
            auto temp = cur;
            temp++;

            if (temp == browser.end()) cout << "Not Available" << endl;
            else  {
                cur++;
                cout << *cur << endl;
            }
        }
        else if (command == "prev") {
            if (cur == browser.begin()) cout << "Not Available" << endl;
    
            else {
                cur--;
                cout << *cur << endl;
            }
        }
    }

    return 0;
}
