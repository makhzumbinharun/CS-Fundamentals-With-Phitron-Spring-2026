#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    long long s;
    cin >> n >> s;
    
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n < 3) {
        cout << "NO\n";
        return;
    }
    
    sort(a.begin(), a.end());

    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;
        
        while (left < right) {
            long long current_sum = a[i] + a[left] + a[right];
            
            if (current_sum == s) {
                cout << "YES\n";
                return;
            }
            else if (current_sum < s) {
                left++;
            }
            else {
                right--;
            }
        }
    }
    
    cout << "NO\n";
}

int main() {

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}
