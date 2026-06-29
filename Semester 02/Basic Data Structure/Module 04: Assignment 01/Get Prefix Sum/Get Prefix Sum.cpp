#include <bits/stdc++.h>

using namespace std;


int main(){
    int N;
    cin >> N;

    vector<long long> prefix(N);

    for (int i = 0; i < N; i++){
        long long x;
        cin >> x;

        if (i == 0)  prefix[i] = x;
        else prefix[i] = prefix[i - 1] + x;
    }

    for (int i = N - 1; i >= 0; i--){
        cout << prefix[i] << " ";
    }

    return 0;
}
