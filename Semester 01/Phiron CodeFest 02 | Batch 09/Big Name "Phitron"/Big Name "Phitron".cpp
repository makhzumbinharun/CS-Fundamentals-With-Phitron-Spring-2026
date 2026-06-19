3/21 test case failed
    

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    int count = 0;
    string word = "";

    for (char c : s){
        if (isalpha(c)) word += tolower(c);
        else        {
            if (word == "phitron")
                count++;
            word = "";
        }
    }

    if (word == "phitron") count++;

    cout << count;

    return 0;
}
