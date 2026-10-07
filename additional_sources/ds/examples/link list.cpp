#include <iostream>
using namespace std;

class record {
    public:
        string Sname;
        string Sid;
        int age;
        float cgpa;
        record* next;

        record() {
            next = nullptr;
        }
};

void insertAtTail(record* &head, record* &tail) {
    record* temp = new record;
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
    record* head = nullptr;
    record* tail = nullptr;

    insertAtTail(head, tail);

    if (head != nullptr) {
        cout << "Record Name: " << head->Sname << endl;
        cout << "record: " << head->Sid << endl;
    }

    while(head){record* old=head;head=head->next;delete old;}
    return 0;
}
