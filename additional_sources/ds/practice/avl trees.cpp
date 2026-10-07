#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    int height;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
        height = 1;  // Initial height of the node
    }
};

// Function to get the height of a node
int height(Node* n) {
    if (n == nullptr) {
        return 0;
    }
    return n->height;
}

// Function to get the balance factor of a node
int getBalance(Node* n) {
    if (n == nullptr) {
        return 0;
    }
    return height(n->left) - height(n->right);
}

// Right rotate utility
Node* rightRotate(Node* y) {
    Node* x = y->left;
    Node* T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    return x;
}

// Left rotate utility
Node* leftRotate(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    return y;
}

// Function to insert a node in the AVL tree
Node* insert(Node* node, int key) {
    if (node == nullptr) {
        return new Node(key);
    }

    if (key < node->data) {
        node->left = insert(node->left, key);
    } else if (key > node->data) {
        node->right = insert(node->right, key);
    } else {
        return node; // Duplicate keys are not allowed
    }

    node->height = 1 + max(height(node->left), height(node->right));

    int balance = getBalance(node);

    // Left Left Case
    if (balance > 1 && key < node->left->data) {
        return rightRotate(node);
    }

    // Right Right Case
    if (balance < -1 && key > node->right->data) {
        return leftRotate(node);
    }

    // Left Right Case
    if (balance > 1 && key > node->left->data) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    // Right Left Case
    if (balance < -1 && key < node->right->data) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    return node;
}

// Inorder traversal function
void inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void clearTree(Node* root){if(!root)return;clearTree(root->left);clearTree(root->right);delete root;}
int main() {
    Node* root = nullptr;

    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 25);

    cout << "Inorder traversal of the AVL tree is: ";
    inorder(root);
    cout << endl;

    clearTree(root);
    return 0;
}
