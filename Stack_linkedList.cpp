#include<iostream>
using namespace std;
void push(int value);
void pop();
void show_top();
void show_elements();

struct Node{
    int data;
    Node*link;
}; Node*top=NULL;

int main(){

    int value,Swithcher;
    int flag=1;

    while(flag==1){
    cout<<"\nChoose  from these \n1. Add data\n2. Delete data\n3. See All values in the satck\n4. See the top value\n5. Exit ";
    cout<<endl;
    cin>>Swithcher;
    switch(Swithcher){
        case 1: 
        cout<<"\nEnter value: ";
        cin>>value;
        push(value);
        break;
        case 2:
         pop();
         cout<<"The top value is deleted";
         break;
        case 3:
        cout<<"The values in the stack: ";
        show_elements();
        break;
        case 4: 
        show_top();
        break;
        case 5: 
        flag=0;
        break;
       }
    }
}

void push(int value){
  Node*temp=new Node();
  temp->data=value;
  temp->link=top;
  top=temp; 
}

void pop(){

    if(top==NULL){
        cout<<" is empty";
    }
    else{
       Node*temp=top;
       top=top->link;
       delete(temp);      
    }

}

void show_elements(){

if(top==NULL){
    cout<<" is empty";
}

else{
    Node*temp=top;
    while(temp!=NULL){
        cout<<temp->data<<", ";
        temp=temp->link;
    }
}
}

void show_top(){
 if(top==NULL){
    cout<<"The stack is empty";
 }
 else {
    cout<<"The top element is: "<<top->data<<endl;
 }
}
