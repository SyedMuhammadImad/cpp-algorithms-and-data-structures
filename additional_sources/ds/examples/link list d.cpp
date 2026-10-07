#include <iostream>
using namespace std ;

class record {
    public :
    string Sname ,Sid ;
    int age; float cgpa;
    record* next;
    record (){ next= nullptr;
    }
};
void displayst(record* head){
    record* temp = head;
    while (temp!=nullptr){
        cout << "Record Name: " << temp->Sname << endl;
        cout << "record: " << temp->Sid << endl;
        cout << "Age: " << temp->age << endl;
        cout << "CGPA: " << temp->cgpa << endl;
        temp = temp->next; 
    }
}
void insertAtTail(record* &head, record* &tail,string name,string id ,int age ,float cgpa ){
    record* temp = new record ;
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
    record* head = nullptr;
    record* tail = nullptr;
    insertAtTail(head, tail, "Abdul", "202", 20, 3.5);
    insertAtTail(head, tail, "jutt sab", "203", 21, 3.8);
    insertAtTail(head, tail, "butt sab", "204", 22, 3.9);

    displayst(head);
    
while(head){record* old=head;head=head->next;delete old;}
return 0 ; 
}