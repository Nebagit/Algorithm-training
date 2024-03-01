#include<iostream>
using namespace std;
    #define SIZE 5
 int stack[SIZE];
     int top=-1;
void push(int value);
void pop();
void show_all();
void show_top();

int main(){

    int flag=1, choice,value;
  while(flag==1){
  cout<<"Choose what to_do\n1. Add a value\n2. Remove the top value\n3. Show all values\n4. Shiw the top value\n5. Exit(pressing 0)"<<endl;
  cin>>choice;
  switch(choice){
    case 1:
    cout<<"Enter the value to add ";
    cin>>value;
    push(value);
      break;
    case 2:
    pop();
    break;
    case 3:
    show_all();
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
if(top==SIZE-1){
        cout<<"The stack is full."<<endl;
    }
else{
     top++;
     stack[top]=value;
  }
}

void pop(){
if(top==-1){
    cout<<"The stck is empty."<<endl;
    }
else{
    top--;
    }
}

void show_all(){
if(top==-1){
        cout<<"The stack is empty."<<endl;
    }
else{
    for(int i=0;i<=top;i++){
        cout<<stack[i]<<", ";
      }
    }
}

void show_top(){
if(top==-1){
        cout<<"The stack is empty."<<endl;
    }
else {
   cout<<"The top element is: "<<stack[top]<<endl;
   }
}