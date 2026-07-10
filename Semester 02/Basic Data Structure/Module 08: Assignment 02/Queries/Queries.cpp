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

void printList(Node *head){
    Node *temp = head;
    while (temp != NULL)    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertHead(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);

    if (head == NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        newNode->next = head;
        head = newNode;
    }
}

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

void deleteIndex(Node *&head, Node *&tail, int index){
    if (head == NULL)
        return;

    if (index == 0){
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;

        if (head == NULL)
            tail = NULL;

        return;
    }

    Node *temp = head;

    for (int i = 0; i < index - 1; i++) {
        if (temp == NULL || temp->next == NULL)
            return;

        temp = temp->next;
    }

    if (temp->next == NULL)
        return;

    Node *deleteNode = temp->next;
    temp->next = temp->next->next;

    if (deleteNode == tail)
        tail = temp;

    delete deleteNode;
}

int main(){
    Node *head = NULL;
    Node *tail = NULL;

    int Q;
    cin >> Q;

    while (Q--){
        int X, V;
        cin >> X >> V;

        if (X == 0)
            insertHead(head, tail, V);
        else if (X == 1)
            insertTail(head, tail, V);
        else
            deleteIndex(head, tail, V);

        printList(head);
    }

    return 0;
}
