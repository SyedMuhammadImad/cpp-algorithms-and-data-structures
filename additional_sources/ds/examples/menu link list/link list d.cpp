// Completed project variant; assisted repair of the local draft.
#include <iostream>
struct node{int data;node* next;};
void displaylist(node* head){if(!head){std::cout<<"The list is empty.\n";return;}for(node* p=head;p;p=p->next)std::cout<<p->data<<" -> ";std::cout<<"Null\n";}
void insertAtTail(node*& head,node*& tail,int value){node* item=new node{value,nullptr};if(!head)head=tail=item;else{tail->next=item;tail=item;}}
int main(){node* head=nullptr;node* tail=nullptr;int choice=0;int result=0;
 while(true){std::cout<<"1: Insert at tail\n2: Display\n3: Exit\nChoice: ";if(!(std::cin>>choice)){if(!std::cin.eof()){std::cerr<<"Invalid choice\n";result=1;}break;}
  if(choice==3)break;if(choice==1){int value=0;std::cout<<"Value: ";if(!(std::cin>>value)){std::cerr<<"Invalid value\n";result=1;break;}insertAtTail(head,tail,value);}
  else if(choice==2)displaylist(head);else std::cout<<"Invalid choice\n";
 }
 while(head){node* old=head;head=head->next;delete old;}return result;}
