#include <iostream>
using namespace std;

class student {
    public:
        string Sname;
        string Sid;
        int age;
        float cgpa;
        student* next;

        student() {
            next = nullptr;
        }
};

void insertAtTail(student* &head, student* &tail) {
    student* temp = new student;
    temp->Sname = "abdul";
    temp->Sid = "202";

    if (head == nullptr) {
        head = tail = temp;
    } else {
        tail->next = temp;
        tail = temp;
    }
}

int main() {
    student* head = nullptr;
    student* tail = nullptr;

    insertAtTail(head, tail);

    if (head != nullptr) {
        cout << "Student Name: " << head->Sname << endl;
        cout << "Student ID: " << head->Sid << endl;
    }

    while(head){student* old=head;head=head->next;delete old;}
    return 0;
}
