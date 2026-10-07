// Completed coursework; empty, singleton, capacity and input boundaries repaired.
#include <iostream>
#include <string>
#include <cassert>
struct student{std::string name;int id;char grade;student* next;};
class StudentList{
 student* head=nullptr;student* tail=nullptr;int count=0;
public:
 StudentList()=default;StudentList(const StudentList&)=delete;StudentList& operator=(const StudentList&)=delete;
 ~StudentList(){clear();}
 bool contains(int id)const{for(student* p=head;p;p=p->next)if(p->id==id)return true;return false;}
 int size()const{return count;}
 bool add(const std::string& name,int id,char grade){if(name.empty()||name.size()>100||id<1||grade<'A'||grade>'F'||contains(id)||count>=1000)return false;
  student* item=new student{name,id,grade,nullptr};if(tail)tail->next=item;else head=item;tail=item;++count;return true;}
 bool eraseID(int id){student* previous=nullptr;student* p=head;while(p&&p->id!=id){previous=p;p=p->next;}if(!p)return false;
  if(previous)previous->next=p->next;else head=p->next;if(tail==p)tail=previous;delete p;--count;return true;}
 bool eraseHead(){return head&&eraseID(head->id);}
 bool eraseTail(){return tail&&eraseID(tail->id);}
 void clear(){while(head){student* old=head;head=head->next;delete old;}tail=nullptr;count=0;}
 void display()const{if(!head)std::cout<<"No students to display.\n";for(student* p=head;p;p=p->next)std::cout<<"Name: "<<p->name<<", ID: "<<p->id<<", Grade: "<<p->grade<<'\n';}
};
int main(int argc,char** argv){
 if(argc==2&&std::string(argv[1])=="--self-test"){
  StudentList list;assert(!list.eraseHead()&&!list.eraseTail()&&!list.eraseID(1));
  assert(list.add("First",1,'A')&&!list.add("Duplicate",1,'A'));assert(list.eraseTail()&&list.size()==0);
  assert(list.add("First",1,'A')&&list.add("Second",2,'B')&&list.add("Third",3,'C'));
  assert(list.eraseID(2)&&!list.contains(2)&&list.contains(3));assert(list.eraseHead()&&list.size()==1);assert(list.eraseTail()&&list.size()==0);
  for(int i=1;i<=1000;++i)assert(list.add("Synthetic",i,'A'));assert(!list.add("Overflow",1001,'A'));list.clear();assert(list.add("Fresh",1001,'B'));
  std::cout<<"Student list self-test passed\n";return 0;
 }
 if(argc!=1){std::cerr<<"Usage: program [--self-test]\n";return 1;}
 StudentList list;
 while(true){int choice=0;std::cout<<"1. Insert Student\n2. Display\n3. Delete\n4. Separator\n5. Exit\nChoice: ";
  if(!(std::cin>>choice)){if(std::cin.eof())return 0;std::cerr<<"Invalid choice\n";return 1;}
  if(choice==5)return 0;
  if(choice==1){std::string name;int id=0;char grade=' ';std::cout<<"Name: ";if(!std::getline(std::cin>>std::ws,name)){std::cerr<<"Invalid name\n";return 1;}
   std::cout<<"ID and grade (A–F): ";if(!(std::cin>>id>>grade)){std::cerr<<"Invalid student input\n";return 1;}
   std::cout<<(list.add(name,id,grade)?"Student inserted\n":"Duplicate, invalid, or capacity exceeded\n");
  }else if(choice==2)list.display();
  else if(choice==3){int mode=0,id=0;std::cout<<"1. Head 2. Tail 3. ID: ";if(!(std::cin>>mode)){std::cerr<<"Invalid delete choice\n";return 1;}
   bool removed=false;if(mode==1)removed=list.eraseHead();else if(mode==2)removed=list.eraseTail();else if(mode==3){std::cout<<"ID: ";if(!(std::cin>>id))return 1;removed=list.eraseID(id);}
   std::cout<<(removed?"Student removed\n":"Student not found or invalid selection\n");
  }else if(choice==4)std::cout<<"--------------------\n";else std::cout<<"Invalid choice\n";
 }
}
