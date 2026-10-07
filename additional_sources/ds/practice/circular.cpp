#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = nullptr;
    }
};

void insertAtHead(node*& head, int val) {
    node* newnode = new node(val);
    if (head == nullptr) {
        newnode->next = newnode;
        head = newnode;
        return;
    }

    node* tail = head;
    while (tail->next != head) {
        tail = tail->next;
    }

    newnode->next = head;
    tail->next = newnode;
    head = newnode;
}

void insertAtTail(node*& head, int val) {
    if (head == nullptr) {
        insertAtHead(head, val);
        return;
    }

    node* newnode = new node(val);
    node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }

    temp->next = newnode;
    newnode->next = head;
}

void display(node* head) {
    if (head == nullptr) return;

    node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

void deleteAtHead(node*& head) {
    if (head == nullptr) return;

    node* tail = head;
    while (tail->next != head) {
        tail = tail->next;
    }

    node* todelete = head;
    if (head == head->next) {
        head = nullptr;
    } else {
        head = head->next;
        tail->next = head;
    }

    delete todelete;
}

void deletion(node*& head, int pos) {
    if(!head || pos<1)return;
    if (pos == 1) {
        deleteAtHead(head);
        return;
    }

    node* temp = head;
    int count = 1;
    while (count < pos - 1 && temp->next != head) {
        temp = temp->next;
        count++;
    }

    if (temp->next == head) return;

    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

int main() {
    node* head = nullptr;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    display(head);
    insertAtHead(head, 9);
    display(head);

    deletion(head, 2);
    display(head);
    while(head)deleteAtHead(head);
    return 0;
}
