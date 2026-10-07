# Text-only document extract

Source document: Dsa examples task 11.docx

Images and layout omitted. Claims below are source text, not independently verified results.

Dsa examples task 11 

Name : Syed Muhammad Imadid : F2023376179Code :#include <iostream>



using namespace std;



struct Node {

    int Data;

    Node* left;

    Node* right;



    Node(int value) {

        Data = value;

        left = nullptr;

        right = nullptr;

    }

};



Node* root = nullptr;



void Insert(int value) {

    Node* newNode = new Node(value);



    if (root != nullptr) {

        InsertNode(root, newNode);

    } else {

        root = newNode;

    }

}



void InsertNode(Node* root, Node* newNode) {

    if (newNode->Data < root->Data) {

        if (root->left == nullptr) {

            root->left = newNode;

        } else {

            InsertNode(root->left, newNode);

        }

    } else {

        if (root->right == nullptr) {

            root->right = newNode;

        } else {

            InsertNode(root->right, newNode);

        }

    }

}



void InOrderTraversal(Node* node) {

    if (node == nullptr) {

        return;

    }

    InOrderTraversal(node->left);

    cout << node->Data << " ";

    InOrderTraversal(node->right);

}



int main() {

    Insert(10);

    Insert(5);

    Insert(15);

    Insert(3);

    Insert(7);



    cout << "In-order traversal of the binary search tree: ";

    InOrderTraversal(root);

    cout << endl;



    return 0;

}
