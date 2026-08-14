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

void left_path(Node* root, vector<int>& v) {
    while (root != NULL) {
        v.push_back(root->val);

        if (root->left != NULL) root = root->left;
        else root = root->right;
    }
}

void right_path(Node* root, vector<int>& v) {
    while (root != NULL) {
        v.push_back(root->val);

        if (root->right != NULL) root = root->right;
        else root = root->left;
    }
}

int main() {
    Node* root = input_tree();

    vector<int> left, right;

    left_path(root, left);
    right_path(root, right);

    if (root->left == NULL) {
        for (int i = 0; i < right.size(); i++) {
            cout << right[i] << " ";
        }
    }

    else if (root->right == NULL) {
        for (int i = left.size() - 1; i >= 0; i--) {
            cout << left[i] << " ";
        }
    }

    else {
        for (int i = left.size() - 1; i >= 1; i--) {
            cout << left[i] << " ";
        }

        cout << root->val << " ";

        for (int i = 1; i < right.size(); i++) {
            cout << right[i] << " ";
        }
    }

    return 0;
}
