#include <iostream>
using namespace std ;

class student {
    public :
    string Sname ,Sid ;
    int age; float cgpa;
    student* next;
    student (){ next= nullptr;
    }
};
void displayst(student* head){
    student* temp = head;
    while (temp!=nullptr){
        cout << "Student Name: " << temp->Sname << endl;
        cout << "Student ID: " << temp->Sid << endl;
        cout << "Age: " << temp->age << endl;
        cout << "CGPA: " << temp->cgpa << endl;
        temp = temp->next; 
    }
}
void insertAtTail(student* &head, student* &tail,string name,string id ,int age ,float cgpa ){
    student* temp = new student ;
    temp-> Sname =name;
    temp->Sid=id;
    temp->age=age;
    temp->cgpa=cgpa;

    if (head==nullptr){
        head = tail = temp;
    } else {
        tail->next = temp;
        tail = temp ;
    } 
}
int main(){
    student* head = nullptr;
    student* tail = nullptr;
    insertAtTail(head, tail, "Abdul", "202", 20, 3.5);
    insertAtTail(head, tail, "jutt sab", "203", 21, 3.8);
    insertAtTail(head, tail, "butt sab", "204", 22, 3.9);

    displayst(head);
    
while(head){student* old=head;head=head->next;delete old;}
return 0 ; 
}