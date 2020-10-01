#include<iostream>

using namespace std;

struct Node{
  int slot;
  int subcode;
  Node *next;
  };
class car{
  public:
    int main_part;
    char* name;
};

class ML

{ Node *heads[6];

public:

ML()

{ for(int i=0;i<6;i++)

heads[i]=NULL;

}

void sortedInsert(int listno,Node * new_node);

void print_given_List(int listno);

void print_ML()

};

void ML :: print_given_List(int listno)

{

Node* head=heads[listno];

while (head != NULL)

{

cout <<"slot->"<<head->slot<< ",";

cout <<"subj->" <<head->subcode<< " ";

head = head->next;

}

cout<<endl;

}

void ML :: print_ML()

{

for(int i=0;i<6;i++)

{

cout<<"\n printing list number "<<i;

print_given_List(i);

}

}

void ML::sortedInsert(int listno,Node* new_node)

{

Node* current;

if (heads[listno] == NULL || heads[listno]->slot >= new_node->slot)

{

new_node->next = heads[listno];

heads[listno]= new_node;

}

else

{

current = heads[listno];

while (current->next != NULL && current->next->slot < new_node->slot)

{

current = current->next;

}

new_node->next = current->next;

current->next = new_node;

}

}

int main()

{

int i,list_no,choice;

int tempslot;

int tempcode;

ML list1;

do

{
cout<<"1: add node"<<endl;

cout<<"2: quit"<<endl;

cin>>choice;

if(choice==1)

{

Node *newnode=new Node;

cout<<"In which listno of multilist do you want to add slot?\n";

cin>>list_no;

cout<<"enter slot";

cin>>tempslot;

cout<<"enter sub_code";

cin>>tempcode;

newnode->slot=tempslot;

newnode->subcode=tempcode;

newnode->next=NULL;

list1.sortedInsert(list_no,newnode);

}

}while(choice==1);

cout<<"\n printing the mentioned list number:\n";

list1.print_given_List(3);

cout<<"\n printing complete list :";

list1.print_ML();

return 0;

}
