#include <bits/stdc++.h>

using namespace std;

struct Student {
    int id;
    string name;
    char section;
    int total_marks;
};

void solve() {
    Student students[3];
    
    for (int i = 0; i < 3; i++) {
        cin >> students[i].id >> students[i].name >> students[i].section >> students[i].total_marks;
    }
    
    Student highest = students[0];
    
    for (int i = 1; i < 3; i++) {
        if (students[i].total_marks > highest.total_marks) {
            highest = students[i];
        } 
        else if (students[i].total_marks == highest.total_marks) {
            if (students[i].id < highest.id) {
                highest = students[i];
            }
        }
    }
    
    cout << highest.id << " " << highest.name << " " << highest.section << " " << highest.total_marks << "\n";
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
