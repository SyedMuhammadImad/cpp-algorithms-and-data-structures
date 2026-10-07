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

void insert(record* &head, record* &tail, string name, string id, int age, float cgpa) {
    record* temp = new record;
    temp->Sname = name;
    temp->Sid = id;
    temp->age = age;
    temp->cgpa = cgpa;

    if (head == nullptr) {
        head = tail = temp;
    } else { 
        tail->next = temp;
        tail = temp;
    }
}

record* searchID(record* head, string id) {
    record* temp = head;
    while (temp != nullptr) {
        if (temp->Sid == id) {
            return temp;
        }
        temp = temp->next;
    }
    return nullptr;
}

void displayrecord(record* stu) {
    if (stu != nullptr) {
        cout << "Record Name: " << stu->Sname << endl;
        cout << "record: " << stu->Sid << endl;
        cout << "Record Age: " << stu->age << endl;
        cout << "Record CGPA: " << stu->cgpa << endl;
    } else {
        cout << "Record not found" << endl;
    }
}

int main() {
    record* head = nullptr;
    record* tail = nullptr;

    insert(head, tail, "a", "1", 20, 2.3);
    insert(head, tail, "b", "2", 22, 3.6);
    insert(head, tail, "c", "3", 24, 2.9);

    string searchId;
    cout << "Enter the record ID for searching: ";
    if(!(cin >> searchId)){while(head){record* old=head;head=head->next;delete old;}cerr<<"Invalid ID\n";return 1;}

    record* result = searchID(head, searchId);
    displayrecord(result);

    while(head){record* old=head;head=head->next;delete old;}
    return 0;
}
