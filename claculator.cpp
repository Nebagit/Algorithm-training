/*#include<iostream>
using namespace std;
int main()
{
    float numOne, numTwo, res;
    int choice;
    do
    {
        cout<<"1. Addition\n";
        cout<<"2. Subtraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Division\n";
        cout<<"5. Exit\n\n";
        cout<<"Enter Your Choice(1-5): ";
        cin>>choice;
        if(choice>=1 && choice<=4)
        {
            cout<<"\nEnter any two Numbers: ";
            cin>>numOne>>numTwo;
        }
        switch(choice)
        {
            case 1:
                res = numOne+numTwo;
                cout<<"\nResult = "<<res;
                break;
            case 2:
                res = numOne-numTwo;
                cout<<"\nResult = "<<res;
                break;
            case 3:
                res = numOne*numTwo;
                cout<<"\nResult = "<<res;
                break;
            case 4:
                res = numOne/numTwo;
                cout<<"\nResult = "<<res;
                break;
            case 5:
                return 0;
            default:
                cout<<"\nWrong Choice!";
                break;
        }
        cout<<"\n------------------------\n";
    }while(choice!=5);
    cout<<endl;
    return 0;
}*/



#include<iostream>
using namespace std;
   float numOne, numTwo, res;
    int choice;
   
float cal(float,float);
float addFun(float, float);
float subFun(float, float);
float mulFun(float, float);
float divFun(float, float);
int main()
{
cal(numOne,numTwo);
    return 0;
}


float cal(float numOne ,float numTwo)
           {
 do{    cout<<"1. Addition\n";
        cout<<"2. Subtraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Division\n";
        cout<<"5. Exit\n\n";
        cout<<"Enter Your Choice(1-5): ";
        cin>>choice;
        if(choice>=1 && choice<=4)
        {
            cout<<"\nEnter any two Numbers: ";
            cin>>numOne>>numTwo;
        }
        switch(choice)
        {
            case 1:
                res = addFun(numOne, numTwo);
                cout<<"\nResult = "<<res;
                break;
            case 2:
                res = subFun(numOne, numTwo);
                cout<<"\nResult = "<<res;
                break;
            case 3:
                res = mulFun(numOne, numTwo);
                cout<<"\nResult = "<<res;
                break;
            case 4:
                res = divFun(numOne, numTwo);
                cout<<"\nResult = "<<res;
                break;
            case 5:
                return 0;
            default:
                cout<<"\nWrong Choice!";
                break;
        }
        cout<<"\n------------------------\n";
    }while(choice!=5);
    cout<<endl;
}



float addFun(float a, float b)
{
    return (a+b);
}
float subFun(float a, float b)
{
    return (a-b);
}
float mulFun(float a, float b)
{
    return (a*b);
}
float divFun(float a, float b)
{
    return (a/b);
}