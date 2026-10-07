// Completed project variant; assisted repair of the local draft.
#include <iostream>
#include <cassert>
struct node{int data;node* next;explicit node(int val):data(val),next(nullptr){}};
void insertAtTail(node*& head,int val){node* item=new node(val);if(!head){head=item;return;}node* p=head;while(p->next)p=p->next;p->next=item;}
void insertAthead(node*& head,int val){node* item=new node(val);item->next=head;head=item;}
bool search(node* head,int key){for(node* p=head;p;p=p->next)if(p->data==key)return true;return false;}
void display(node* head){for(node* p=head;p;p=p->next)std::cout<<p->data<<' ';std::cout<<'\n';}
void clear(node*& head){while(head){node* old=head;head=head->next;delete old;}}
int main(){node* head=nullptr;assert(!search(head,1));insertAtTail(head,1);insertAtTail(head,2);display(head);insertAthead(head,4);display(head);
 assert(search(head,1)&&search(head,2)&&search(head,4)&&!search(head,6));std::cout<<search(head,6)<<'\n';clear(head);assert(!head);}
