# Text-only document extract

Source document: imad dsa1.docx

Images and layout omitted. Claims below are source text, not independently verified results.

Name: Syed Muhammad Imad

Roll ID: F2023376179

#include <iostream>

using namespace std;







struct Node {

    int data;

    Node* apointer;



    Node(int value) : data(value), apointer(nullptr) {}

};









class linkedShudaList {

private:

    Node* head;







public:

    linkedShudaList() : head(nullptr) {}



    void insert(int value) {

        Node* newNode = new Node(value);

        newNode->apointer = head;

        head = newNode;

        cout << "Great! " << value << " has been added to the list.\n";

    }





    void remove() {

        if (head == nullptr) {

            cout << "Oops! The list is already empty. Kuch dalo to delete kru :(.\n";

            return;

        }

        Node* temp = head;

        head = head->apointer;

        cout  << temp->data << " has been removed from the list.\n";

        delete temp;

    }







    bool search(int value) {

        Node* current = head;

        while (current != nullptr) {

            if (current->data == value) {

                cout << "Yes! " << value << " is in the list.\n";

                return true;

            }

            current = current->apointer;

        }

        cout << "Sorry, " << value << " is not in the list.\n";

        return false;

    }







    void display() {

        if (head == nullptr) {

            cout << "The list is currently empty. Add some items to see them here!\n";

            return;

        }

        Node* current = head;

        cout << "Here are the items in your list: ";

        while (current != nullptr) {

            cout << current->data << " ";

            current = current->apointer;

        }

        cout << endl;





}





};







int main() {

    linkedShudaList list;

    int choice, menuitem;



    cout << "Welcome to your Personal List Manager!\n\n";

    cout << "You can add, delete, search, and view items easily using this program.\n";







    do {

        cout << "\n------------------MENU------------------\n";

        cout << "What would you like to do?\n";

        cout << "1. Add an item to the list\n";

        cout << "2. Remove the first item from the list\n";

        cout << "3. Search for an item in the list\n";

        cout << "4. Show all items in the list\n";

        cout << "5. Exit the program\n";

        cout << "Please enter your choice (1-5): ";







        cin >> choice;





        switch (choice) {





        case 1:

            cout << "Please enter the number you'd like to add: ";

            cin >> menuitem;

            list.insert(menuitem);

            break;







        case 2:

            list.remove();

            break;





        case 3:

            cout << "Enter the number you want to search for: ";

            cin >> menuitem;

            list.search(menuitem);

            break;







        case 4:

            list.display();

            break;







        case 5:

            cout << "Thank you for using your Personal List Manager! Goodbye!\n";

            break;









        default:

            cout << "Hmm, that doesn't seem right. Please choose a valid option (1-5).\n";

        }







        if (choice != 5) {

            cout << "\nPress Enter to return to the menu...";

            cin.ignore();

            cin.get();

        }







    } while (choice != 5);

















    return 0;

}