#include <bits/stdc++.h>
using namespace std;
const int MAX = 1000005;

class Stack{
public:
    int arr[MAX];
    int topIndex = -1;

    void push(int x){
        arr[++topIndex] = x;
    }

    void pop(){
        topIndex--;
    }

    int top(){
        return arr[topIndex];
    }

    bool empty() {
        return topIndex == -1;
    }
};

class Queue{
public:
    int arr[MAX];
    int frontIndex = 0, rearIndex = 0;

    void push(int x) {
        arr[rearIndex++] = x;
    }

    void pop(){
        frontIndex++;
    }

    int front() {
        return arr[frontIndex];
    }

    bool empty() {
        return frontIndex == rearIndex;
    }
};

int main(){
    int N, M;
    cin >> N >> M;

    Stack A;
    Queue B;

    for (int i = 0; i < N; i++){
        int x;
        cin >> x;
        A.push(x);
    }

    for (int i = 0; i < M; i++){
        int x;
        cin >> x;
        B.push(x);
    }

    if (N != M){
        cout << "NO";
        return 0;
    }

    while (!A.empty()) {
        if (A.top() != B.front()) {
            cout << "NO";
            return 0;
        }
        A.pop();
        B.pop();
    }

    cout << "YES";

    return 0;
}
