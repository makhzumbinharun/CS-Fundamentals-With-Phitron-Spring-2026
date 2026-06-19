#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int oddSum = 0;
    int evenSum = 0;
    int position = 1;

    for (int i = s.size() - 1; i >= 0; i--)    {
        int digit = s[i] - '0';

        if (position % 2 == 1)         oddSum += digit;
        else    evenSum += digit;

        position++;
    }

    int diff = abs(oddSum - evenSum);

    if (diff % 11 == 0)    cout << "YES";
    else  cout << "NO";

    return 0;
}
