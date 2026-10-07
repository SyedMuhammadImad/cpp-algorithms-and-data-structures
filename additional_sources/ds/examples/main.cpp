// Book Return System for Library
// Manages a library system where returned books are stored in a stack
// and processed for shelving in LIFO order.

#include <iostream>
#include <limits>
#include <string>
using namespace std;

struct Book {
    string title;
    string author;
    int year;
};

class Stack {
private:
    Book* stackArray;
    int top;
    int capacity;
public:
    Stack(int sizee) {
        capacity = sizee;
        stackArray = new Book[capacity];
        top = -1;
    }

    ~Stack() { delete[] stackArray; }
    Stack(const Stack&) = delete;
    Stack& operator=(const Stack&) = delete;

    void push(Book& book) {
        if (top == capacity - 1) {
            cout << "Error: Stack is full. Cannot add more books." << endl;
            cout << endl;
            return;
        }
        stackArray[++top] = book;
    }

    void pop(Book& removedBook) {
        if (top == -1) {
            cout << "Error: Stack is empty. Cannot remove book." << endl;
            removedBook = {"", "", 0};
            cout << endl;
            return;
        }
        removedBook = stackArray[top--];
    }

    void peek(Book& topBook) {
        if (top == -1) {
            cout << "Error: Stack is empty." << endl;
            topBook = {"", "", 0};
            cout << endl;
            return;
        }
        topBook = stackArray[top];
    }

    bool isEmpty() {
        return top == -1;
    }

    int sizee() {
        return top + 1;
    }

    void printReceipt() {
        if (isEmpty()) {
            cout << "No books to display. Stack is empty." << endl;
            cout << endl;
            return;
        }
        cout << endl;
        cout << " Receipt of Returned Books: " << endl;
        for (int i = 0; i <= top; ++i) {
            cout << "Title: " << stackArray[i].title << ", Author: " << stackArray[i].author << ", Year: " << stackArray[i].year << endl;
        }
        cout << endl;
        cout << "Total Books Returned: " << sizee() << endl;
    }
};

int main() {
    Stack stack(100);
    int choice;
    do {
        cout << "Menu: " << endl;
        cout << "1. Add Returned Book" << endl;
        cout << "2. Remove Top Book" << endl;
        cout << "3. Total books returned " << endl;
        cout << "4. Print Receipt of Books" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        if (!(cin >> choice)) {
            if (cin.eof()) break;
            cerr << "Invalid input: enter a menu number." << endl;
            cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        cout << endl;

        switch (choice) {
            case 1: {
                Book newBook;
                cout << "Enter book title: ";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                getline(cin, newBook.title);
                cout << "Enter book author: ";
                getline(cin, newBook.author);
                cout << "Enter year of publication: ";
                if (!(cin >> newBook.year)) { cerr << "Invalid year." << endl; cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n'); break; }
                stack.push(newBook);
                cout << endl;
                break;
            }
            case 2: {
                Book removedBook;
                stack.pop(removedBook);
                if (removedBook.title != "") {
                    cout << "Removed book: " << removedBook.title << endl;
                    cout << endl;
                }
                break;
            }
            case 3: {
                cout << "The total number of books which are returned :  " << stack.sizee() << endl;
                cout << endl;
                break;
            }
            case 4: {
                stack.printReceipt();
                break;
            }
            case 5: {
                cout << "Exiting program." << endl;
                break;
            }
            default: {
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }
    } while (choice != 5);

    return 0;
}
