#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string nm;
    int cls;
    char s;
    long long id;
    int math_marks, eng_marks;
};

bool cmp(Student a, Student b) {
    if (a.eng_marks > b.eng_marks) return true;
    if (a.eng_marks < b.eng_marks) return false;

    if (a.math_marks > b.math_marks) return true;
    if (a.math_marks < b.math_marks) return false;

    return a.id < b.id;
}

int main() {
    int N;
    cin >> N;
    Student arr[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i].nm >> arr[i].cls >> arr[i].s
            >> arr[i].id >> arr[i].math_marks >> arr[i].eng_marks;
    }

    sort(arr, arr + N, cmp);

    for (int i = 0; i < N; i++) {
        cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << " "
             << arr[i].math_marks << " " << arr[i].eng_marks << "\n";
    }

    return 0;
}
