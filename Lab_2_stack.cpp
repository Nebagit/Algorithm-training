#include <iostream>
#include <string>
using namespace std;
class stack{
private:
    int top;
    int arr[5];
public:
    stack ()//constructor
    {
    top = -1;
    for(int i=0;i<5;i++)
         arr[i]=0;
    }

bool isEmpty()
{
    if(top==-1)
        return true;
    else return false;
}
bool isFull()
{
    if(top== 4)
        return true;
    else return false;
}
void push(int val)
{
    if(isFull())
    {
        cout<<"stack overflow"<<endl;
    }
    else
    {
        top++;
        arr[top]= val;

    }
    }
    int pop()
    {
                if(isEmpty())
        {
        cout<<"stack underflow"<<endl;
        }
       else
        {
        int popval = arr[top];
        arr[top] = 0;
        top--;
        return popval;

       }
    }
    int count()
    {
        return (top + 1);
    }
    int peak(int pos)
    {
    if(isEmpty())
       {
        cout<<"stack underflow"<<endl;
       }
       else
        {
         return arr[pos];

        }
    }
    void change(int pos, int val)
    {
      arr[pos] = val;
      cout<<"Value changed at location"<<pos<<endl;
    }

     void display()
     {
         cout<<"All values in the stack are"<<endl;
         for(int i = 4;i>=0; i--)
         {
             cout<<arr[i]<<endl;
         }
     }


};

int main()
{
    stack s1;//object
    int option, position,value;
    do
    {
        cout<<"what operations do you want to perform? select option number.Enter 0 to exit"<<endl;
        cout<<"1. push()"<<endl;
        cout<<"2. pop()"<<endl;
        cout<<"3. isEmpty()"<<endl;
        cout<<"4. isFull()"<<endl;
        cout<<"5. peak()"<<endl;
        cout<<"6. count()"<<endl;
        cout<<"7. change()"<<endl;
        cout<<"8. display()"<<endl;
        cout<<"9. clear screen"<<endl<<endl;

    cin>>option;
    switch(option)
    {
    case 1:
        cout<<"Enter an item to push in the stack"<<endl;
        cin>>value;
        s1.push(value);
        break;
    case 2:
        cout<<"Pop Function called - pop value:"<<s1.pop()<<endl;
         break;
    case 3:
        if(s1.isEmpty())
        cout<<"Stack is empty"<<endl;
        break;
    case 4:
         if(s1.isFull())
        cout<<"Stack is Full"<<endl;
        else
        cout<<"Stack is not Full"<<endl;
        break;
    case 5:
        cout<<"Enter position of item you want to peak"<<endl;
        cin>>position;
        cout<<"Peak function called - value at position"<<position<<"is"<<s1.peak(position)<<endl;
        break;

    case 6:
        cout<<"count function called "<<"number of items in the stack are"<<s1.count()<<endl;
        break;
    case 7:
        cout<<"change function called"<<endl;
        cout<<"Enter position of item you want to change";
        cin>>position;
        cout<<endl;
        cout<<"Enter value of Item you want to change";
        cin>>value;
        s1.change(position, value);
        break;

    case 8:
        cout<<"Display function is called"<<endl;
        s1.display();
        break;
    case 9:
        system("cls");
        break;
        defualt:
        cout<<"Enter proper option number"<<endl;
            }
    }
    while(option!=0);

    return 0;
}
