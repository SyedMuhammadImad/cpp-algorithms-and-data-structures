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

void insert(student* &head, student* &tail, string name, string id, int age, float cgpa) {
    student* temp = new student;
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

student* searchID(student* head, string id) {
    student* temp = head;
    while (temp != nullptr) {
        if (temp->Sid == id) {
            return temp;
        }
        temp = temp->next;
    }
    return nullptr;
}

void displaystudent(student* stu) {
    if (stu != nullptr) {
        cout << "Student Name: " << stu->Sname << endl;
        cout << "Student ID: " << stu->Sid << endl;
        cout << "Student Age: " << stu->age << endl;
        cout << "Student CGPA: " << stu->cgpa << endl;
    } else {
        cout << "Student not found" << endl;
    }
}

int main() {
    student* head = nullptr;
    student* tail = nullptr;

    insert(head, tail, "a", "1", 20, 2.3);
    insert(head, tail, "b", "2", 22, 3.6);
    insert(head, tail, "c", "3", 24, 2.9);

    string searchId;
    cout << "Enter the student ID for searching: ";
    if(!(cin >> searchId)){while(head){student* old=head;head=head->next;delete old;}cerr<<"Invalid ID\n";return 1;}

    student* result = searchID(head, searchId);
    displaystudent(result);

    while(head){student* old=head;head=head->next;delete old;}
    return 0;
}
