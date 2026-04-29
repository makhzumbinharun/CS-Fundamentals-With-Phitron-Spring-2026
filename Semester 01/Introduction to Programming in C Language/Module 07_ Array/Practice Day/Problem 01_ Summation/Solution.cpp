#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;
 
    long long sum = 0, x;
    for (int i = 0; i < N; i++) {
        cin >> x;
        sum += x;
    }
 
    cout << llabs(sum) << endl;
    return 0;
}
