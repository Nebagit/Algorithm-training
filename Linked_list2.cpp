#include<iostream>
using namespace std;
class Node{
    public:
int Value;
Node* Next;
};

void insertAtTheEnd(Node*head,int value){
Node*newNode1=new Node();
while(head!=NULL){
    head=head->Next;
    if(head==NULL){
        newNode1->Value=value;
       head->Next=newNode1;
        newNode1->Next=NULL;
    }
}
}
void insertAtTheFront(Node**head, int newvalue){
Node* newNode=new Node();
newNode->Value=newvalue;
newNode->Next=*head;
*head=newNode;

} ;
void printlist(Node*n){
while(n!=NULL){
    cout<<n->Value<<endl;
    n=n->Next;
}
}
int main(){
 Node*head=new Node();
Node*second=new Node();
Node*third=new Node();


// Node*head=new Node();

head->Value=1;
head->Next=second;
second->Value=2;
second->Next=third;
third->Value=3;
third->Next=NULL;
insertAtTheFront(&head,9);
insertAtTheEnd(head,12);
printlist(head);

}