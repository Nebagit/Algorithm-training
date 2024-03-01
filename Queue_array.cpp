#include<iostream>
using namespace std;
#define SIZE 5
int queue[SIZE];
int front=-1;
int rear=-1;
void enqueue(int value);
void dequeue();
void show_front();
void show_all();

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

void enqueue(int value){
    if(rear==SIZE-1){
        cout<<"The queue is full."<<endl;
    }
    else{
        if(front==-1){
            front=0;
            rear++;
            queue[rear]=value;
        }
    }
}

void dequeue(){
    if(front==-1&&rear==-1){
        cout<<"The queue is Empty."<<endl;
    }
    else{
        if(front==rear){
            front=rear=-1;
        }
        else
        front++;
    }
}

void show_front(){
    if(front==-1){
        cout<<"The queue is empty"<<endl;
    }
    else
    cout<<"The front element is: "<<queue[front];
}

void show_all(){
    if(front==-1&&rear==-1){
        cout<<"The queue is empty"<<endl;
    }
    else{
    for(int i=front;i<=rear;i++){
        cout<<queue[i]<<",";
     }
    }
}