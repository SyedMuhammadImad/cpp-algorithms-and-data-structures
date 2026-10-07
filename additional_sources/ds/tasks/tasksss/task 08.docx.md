# Text-only document extract

Source document: task 08.docx

Images and layout omitted. Claims below are source text, not independently verified results.

Code for doubly linklist :#include <iostream>

using namespace std;



struct Node {

    int data;

    Node* prev;

    Node* next;

};



Node* head = nullptr;



void insert(int value) {

    Node* newNode = new Node;

    newNode->data = value;

    newNode->prev = nullptr;

    newNode->next = nullptr;



    if (head == nullptr) {

        head = newNode;

    } else {

        Node* temp = head;

        while (temp->next != nullptr) {

            temp = temp->next;

        }

        temp->next = newNode;

        newNode->prev = temp;

    }

    cout << "Inserted: " << value << endl;

}



void deleteNode(int value) {

    if (head == nullptr) {

        cout << "List is empty!" << endl;

        return;

    }



    Node* temp = head;

    while (temp != nullptr) {

        if (temp->data == value) {

            if (temp->prev != nullptr) {

                temp->prev->next = temp->next;

            } else {

                head = temp->next;

            }

            if (temp->next != nullptr) {

                temp->next->prev = temp->prev;

            }

            delete temp;

            cout << "Deleted: " << value << endl;

            return;

        }

        temp = temp->next;

    }

    cout << "Value not found: " << value << endl;

}



bool search(int value) {

    Node* temp = head;

    while (temp != nullptr) {

        if (temp->data == value) {

            return true;

        }

        temp = temp->next;

    }

    return false;

}



void display() {

    if (head == nullptr) {

        cout << "List is empty!" << endl;

        return;

    }



    Node* temp = head;

    while (temp != nullptr) {

        cout << temp->data << " ";

        temp = temp->next;

    }

    cout << endl;

}



int main() {

    int choice, num;



    do {

        cout << "Doubly Linked List Menu" << endl;

        cout << "1. Insert" << endl;

        cout << "2. Delete" << endl;

        cout << "3. Search" << endl;

        cout << "4. Display" << endl;

        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";

        cin >> choice;



        switch (choice) {

            case 1:

                cout << "Enter the value to insert: ";

                cin >> num;

                insert(num);

                break;

            case 2:

                cout << "Enter the value to delete: ";

                cin >> num;

                deleteNode(num);

                break;

            case 3:

                cout << "Enter the value to search: ";

                cin >> num;

                if (search(num)) {

                    cout << "Found: " << num << endl;

                } else {

                    cout << "Not found: " << num << endl;

                }

                break;

            case 4:

                cout << "The list is: ";

                display();

                break;

            case 5:

                cout << "Exiting the program." << endl;

                break;

            default:

                cout << "Invalid choice. Try again." << endl;

        }

    } while (choice != 5);



    return 0;

}