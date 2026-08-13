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

    if (val == -1) return NULL;

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

void leaf_nodes(Node* root, vector<int>& v) {
    if (root == NULL) return;

    if (root->left == NULL && root->right == NULL) {
        v.push_back(root->val);
        return;
    }

    leaf_nodes(root->left, v);
    leaf_nodes(root->right, v);
}

int main() {
    Node* root = input_tree();

    vector<int> v;

    leaf_nodes(root, v);

    sort(v.begin(), v.end(), greater<int>());

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
