#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string nm;
    int cls;
    char s;
    int id;

    void input() {
        cin >> nm >> cls >> s >> id;
    }

    void print() {
        cout << nm << " " << cls << " " << s << " " << id << "\n";
    }
};

int main() {
    int N;
    cin >> N;

    vector<Student> arr(N);

    for (int i = 0; i < N; i++) {
        arr[i].input();
    }

    // reverse only section (s)
    for (int i = 0; i < N / 2; i++) {
        swap(arr[i].s, arr[N - 1 - i].s);
    }

    for (int i = 0; i < N; i++) {
        arr[i].print();
    }

    return 0;
}
