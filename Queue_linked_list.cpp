#include<iostream>
using namespace std;
struct Node{
    int value;
    Node*link;
};
Node*front=NULL;
Node*rear=NULL;

void enqueue(int value);
void dequeue();
void show_all();
void show_front();
int main(){
    int flag=1;
    while(flag==1){
    int choice,value;
    cout<<"Choose what you want\n1. Enqueue\n2. Dequeue\n3. Show front\n4. Show all\n5. Exit(press 0)"<<endl;
    cin>>choice;
switch(choice){
    case 1:
    cout<<"Enter a value: ";
    cin>>value;
    enqueue(value);
    break;
    case 2:
    dequeue();
    break;
    case 3:
    show_front();
    break;
    case 4:
    show_all();
    break;
    case 5:
    flag=0;
   }
  }
}
/// @brief 
/// @param value 
void enqueue(int value){

    Node*temp=new Node();
    temp->value=value;
    temp->link=NULL;
if(front==NULL){
    front=temp;
    rear=temp;
}
else{
    rear->link=temp;
    rear=temp;
}

}

void dequeue(){
    Node*temp=new Node();
    if(front==NULL){
        cout<<"The queue is empty"<<endl;
    }
    if(front==rear){
        free(front);
        front=rear=NULL;
    }
    else{
        Node*temp=front;
        front=front->link;
        free(temp);
    }
}
void show_front(){
    if(front==NULL){
        cout<<"The queue is empty"<<endl;
    }
    else{
        cout<<"The front element is: "<<front->value<<endl;
    }
}

void show_all(){
    Node*temp=front;
    while(temp!=NULL){
    cout<<temp->value<<" ";
    temp=temp->link;
    }
}

