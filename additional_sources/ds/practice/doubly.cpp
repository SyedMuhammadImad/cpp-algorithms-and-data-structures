// Completed project variant; assisted repair of the local draft.
#include <iostream>
#include <cassert>
struct node{int data;node* next;node* prev;explicit node(int val):data(val),next(nullptr),prev(nullptr){}};
void insertAthead(node*& head,int val){node* item=new node(val);item->next=head;if(head)head->prev=item;head=item;}
void insertAtTail(node*& head,int val){if(!head){insertAthead(head,val);return;}node* p=head;while(p->next)p=p->next;node* item=new node(val);p->next=item;item->prev=p;}
void deleteAtHead(node*& head){if(!head)return;node* old=head;head=head->next;if(head)head->prev=nullptr;delete old;}
bool deletion(node*& head,int pos){if(pos<1)return false;node* p=head;for(int i=1;p&&i<pos;++i)p=p->next;if(!p)return false;
 if(p->prev)p->prev->next=p->next;else head=p->next;if(p->next)p->next->prev=p->prev;delete p;return true;}
void display(node* head){for(node* p=head;p;p=p->next)std::cout<<p->data<<' ';std::cout<<'\n';}
void clear(node*& head){while(head)deleteAtHead(head);}
int main(){node* head=nullptr;assert(!deletion(head,1));deleteAtHead(head);insertAtTail(head,1);insertAtTail(head,2);insertAtTail(head,3);display(head);
 insertAthead(head,9);display(head);assert(deletion(head,2));display(head);assert(head->data==9&&head->next->data==2&&head->next->prev==head);
 assert(!deletion(head,99)&&!deletion(head,0));assert(deletion(head,3));assert(head->next->next==nullptr);clear(head);assert(!head);
 insertAthead(head,7);deleteAtHead(head);assert(!head);}
