#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student a, Student b) {
    int totalA = a.math_marks + a.eng_marks;
    int totalB = b.math_marks + b.eng_marks;

    if (totalA == totalB)
        return a.id < b.id;

    return totalA > totalB;
}

int main() {
    int N;
    cin >> N;

    vector<Student> arr(N);

    for (int i = 0; i < N; i++) {
        cin >> arr[i].nm  >> arr[i].cls >> arr[i].s >> arr[i].id
        >> arr[i].math_marks  >> arr[i].eng_marks;
    }

    sort(arr.begin(), arr.end(), cmp);

    for (int i = 0; i < N; i++) {
        cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].s << " "
        << arr[i].id << " " << arr[i].math_marks << " "  << arr[i].eng_marks << "\n";
    }

    return 0;
}
