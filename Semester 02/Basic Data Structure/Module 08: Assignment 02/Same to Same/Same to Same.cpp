#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

int main(){
    Node *head1 = NULL, *tail1 = NULL;
    Node *head2 = NULL, *tail2 = NULL;

    int x;

    while (cin >> x && x != -1){
        Node *newNode = new Node(x);

        if (head1 == NULL) {
            head1 = newNode;
            tail1 = newNode;
        }
        else {
            tail1->next = newNode;
            tail1 = newNode;
        }
    }

    while (cin >> x && x != -1) {
        Node *newNode = new Node(x);

        if (head2 == NULL){
            head2 = newNode;
            tail2 = newNode;
        }
        else{
            tail2->next = newNode;
            tail2 = newNode;
        }
    }

    Node *temp1 = head1;
    Node *temp2 = head2;

    bool same = true;

    while (temp1 != NULL && temp2 != NULL) {
        if (temp1->val != temp2->val) {
            same = false;
            break;
        }

        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if (temp1 != NULL || temp2 != NULL)
        same = false;

    if (same)  cout << "YES";
    else  cout << "NO";

    return 0;
}
