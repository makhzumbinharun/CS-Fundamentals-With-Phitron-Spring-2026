#include <bits/stdc++.h>

using namespace std;

class Node{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val){
        this->val = val;
        next = NULL;
        prev = NULL;
    }
};

void print_left(Node *head){
    cout << "L -> ";
    Node *tmp = head;
    while (tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_right(Node *tail){
    cout << "R -> ";
    Node *tmp = tail;
    while (tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int size(Node *head){
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL) {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void insert_head(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_tail(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insert_index(Node *head, int idx, int val){
    Node *tmp = head;

    for (int i = 0; i < idx - 1; i++) {
        tmp = tmp->next;
    }

    Node *newNode = new Node(val);

    newNode->next = tmp->next;
    tmp->next->prev = newNode;

    tmp->next = newNode;
    newNode->prev = tmp;
}

int main(){
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;

    while (q--) {
        int x, v;
        cin >> x >> v;

        int sz = size(head);

        if (x < 0 || x > sz) {
            cout << "Invalid" << endl;
            continue;
        }

        if (x == 0)   insert_head(head, tail, v);

        else if (x == sz) insert_tail(head, tail, v);
        
        else insert_index(head, x, v);
        
        print_left(head);
        print_right(tail);
    }

    return 0;
}                     
