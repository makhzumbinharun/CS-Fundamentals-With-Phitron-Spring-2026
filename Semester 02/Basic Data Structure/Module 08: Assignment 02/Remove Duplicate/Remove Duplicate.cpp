#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void insertTail(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);

    if (head == NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        tail->next = newNode;
        tail = newNode;
    }
}

void removeDuplicate(Node *head){
    Node *temp = head;

    while (temp != NULL){
        Node *curr = temp;

        while (curr->next != NULL){
            if (curr->next->val == temp->val) {
                Node *deleteNode = curr->next;
                curr->next = curr->next->next;
                delete deleteNode;
            }
            else{
                curr = curr->next;
            }
        }

        temp = temp->next;
    }
}

void printList(Node *head){
    Node *temp = head;

    while (temp != NULL){
        cout << temp->val;

        if (temp->next != NULL)
            cout << " ";

        temp = temp->next;
    }
}

int main(){
    Node *head = NULL;
    Node *tail = NULL;

    int x;
    while (cin >> x && x != -1){
        insertTail(head, tail, x);
    }

    removeDuplicate(head);

    printList(head);

    return 0;
}
