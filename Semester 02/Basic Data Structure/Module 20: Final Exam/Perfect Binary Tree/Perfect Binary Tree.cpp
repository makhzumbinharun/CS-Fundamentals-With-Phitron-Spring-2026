
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

int height(Node* root) {
    if (root == NULL)
        return -1;

    return max(height(root->left), height(root->right)) + 1;
}

bool isPerfect(Node* root) {
    if (root == NULL)
        return true;

    if (root->left == NULL && root->right == NULL)
        return true;

    if (root->left == NULL || root->right == NULL)
        return false;

    return height(root->left) == height(root->right)
           && isPerfect(root->left) && isPerfect(root->right);
}

int main() {
    Node* root = input_tree();

    if (isPerfect(root))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
