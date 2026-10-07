#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

struct node {
    int data;
    node *left, *right;

    node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

node* insertbst(node* root, int val) {
    if (root == nullptr) {
        return new node(val);
    }
    if (val < root->data) {
        root->left = insertbst(root->left, val);
    } else {
        root->right = insertbst(root->right, val);
    }
    return root;
}

node* searchbst(node* root, int key) {
    if (root == nullptr || root->data == key) {
        return root;
    }
    if (key < root->data) {
        return searchbst(root->left, key);
    } else {
        return searchbst(root->right, key);
    }
}

void inorder(node* root) {
    if (root == nullptr) {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(node* root) {
    if (root == nullptr) {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root) {
    if (root == nullptr) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

node* inordersucc(node* root) {
    node* curr = root;
    while (curr && curr->left != nullptr) {
        curr = curr->left;
    }
    return curr;
}

node* deletebst(node* root, int key) {
    if (root == nullptr) {
        return root;
    }
    if (key < root->data) {
        root->left = deletebst(root->left, key);
    } else if (key > root->data) {
        root->right = deletebst(root->right, key);
    } else {
        if (root->left == nullptr) {
            node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            node* temp = root->left;
            delete root;
            return temp;
        }
        node* temp = inordersucc(root->right);
        root->data = temp->data;
        root->right = deletebst(root->right, temp->data);
    }
    return root;
}

void preorderNodes(node* root,vector<node*>& out){if(!root)return;out.push_back(root);preorderNodes(root->left,out);preorderNodes(root->right,out);}
void postorderNodes(node* root,vector<node*>& out){if(!root)return;postorderNodes(root->left,out);postorderNodes(root->right,out);out.push_back(root);}
node* nextInTraversal(const vector<node*>& order,node* current){if(order.empty())return nullptr;if(!current)return order.front();
 auto pos=find(order.begin(),order.end(),current);if(pos==order.end()||++pos==order.end())return nullptr;return *pos;}
node* preorderSuccessor(node* root,node* current){vector<node*> order;preorderNodes(root,order);return nextInTraversal(order,current);}
node* postorderSuccessor(node* root,node* current){vector<node*> order;postorderNodes(root,order);return nextInTraversal(order,current);}
void clearTree(node*& root){if(!root)return;clearTree(root->left);clearTree(root->right);delete root;root=nullptr;}
int main(){node* root=nullptr;assert(!preorderSuccessor(root,nullptr));for(int value:{45,2,6,9,4})root=insertbst(root,value);
 std::cout<<"In-order: ";inorder(root);std::cout<<"\nPre-order: ";preorder(root);std::cout<<"\nPost-order: ";postorder(root);std::cout<<'\n';
 vector<node*> pre,post;preorderNodes(root,pre);postorderNodes(root,post);
 for(std::size_t i=0;i<pre.size();++i)assert(preorderSuccessor(root,pre[i])==(i+1<pre.size()?pre[i+1]:nullptr));
 for(std::size_t i=0;i<post.size();++i)assert(postorderSuccessor(root,post[i])==(i+1<post.size()?post[i+1]:nullptr));
 root=deletebst(root,6);assert(!searchbst(root,6));root=deletebst(root,45);assert(!searchbst(root,45));root=deletebst(root,999);
 std::cout<<"After deletion: ";inorder(root);std::cout<<'\n';clearTree(root);assert(!root);}
