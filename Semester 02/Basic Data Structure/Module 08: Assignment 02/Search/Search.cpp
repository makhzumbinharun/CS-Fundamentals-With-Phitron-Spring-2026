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

int main(){
    int T;
    cin >> T;

    while (T--){
        Node *head = NULL;
        Node *tail = NULL;

        int x;
        while (cin >> x && x != -1){
            Node *newNode = new Node(x);

            if (head == NULL){
                head = newNode;
                tail = newNode;
            }
            else{
                tail->next = newNode;
                tail = newNode;
            }
        }

        int X;
        cin >> X;

        Node *temp = head;
        int index = 0;
        int ans = -1;

        while (temp != NULL){
            if (temp->val == X){
                ans = index;
                break;
            }

            temp = temp->next;
            index++;
        }

        cout << ans << endl;
    }

    return 0;
}
