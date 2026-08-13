#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
};

Node* newNode(int val) {
    Node* node = new Node;
    node->val = val;
    node->left = NULL;
    node->right = NULL;

    return node;
}

Node* input_tree() {
    int val;
    cin >> val;

    if (val == -1)
        return NULL;

    Node* root = newNode(val);

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l != -1) {
            p->left = newNode(l);
            q.push(p->left);
        }

        if (r != -1) {
            p->right = newNode(r);
            q.push(p->right);
        }
    }

    return root;
}

void print_level(Node* root, int level) {
    if (root == NULL)
        return;

    queue<Node*> q;
    q.push(root);

    int current_level = 0;

    while (!q.empty()) {
        int size = q.size();

        if (current_level == level) {
            while (!q.empty()) {
                cout << q.front()->val << " ";
                q.pop();
            }
            return;
        }

        for (int i = 0; i < size; i++) {
            Node* p = q.front();
            q.pop();

            if (p->left != NULL)
                q.push(p->left);

            if (p->right != NULL)
                q.push(p->right);
        }

        current_level++;
    }

    cout << "Invalid";
}

int main() {
    Node* root = input_tree();

    int level;
    cin >> level;

    print_level(root, level);

    return 0;
}
