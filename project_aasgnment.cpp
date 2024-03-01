#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

struct user{
    string name,sex,age,department, personalityTestResult[8];
    vector <int> matchCounter;
};
void menu();
void signUp();
void fileToStructure();
void match(user[], int);

int main()
{
    menu();
    return 0;
}

void menu(){
     int choice;
        system("cls");
        do{
        cout<<"********** Matcher **********"<<endl;
        cout<<"1. Sign Up"<<endl;
        cout<<"2. Match Survey"<<endl;
        cout<<"3. Search members"<<endl;
        cout<<"4. Remove members"<<endl;
        cout<<"5. exit"<<endl;
        cout<<"*****************************"<<endl;
        cin>>choice;
        switch(choice){
          case 1:
            signUp();
            break;
          case 2:
            fileToStructure();
            break;
          case 3:
            //register_();
            break;
          case 4:
            //search();
            break;
          case 5:
            break;
            }
        }
        while(choice!=5);

}
void signUp(){
     //sign up, then we will have to make a new menu for users who log in and then accept their info
    ofstream basicInfo("nameandpass.txt", ios::app);
    ofstream otherInfo("usersInformation.txt", ios::app);
    string name,sex, password, department, interests;
    int age, choice1, choice2, choice3, choice4, choice5, choice6, choice7, choice8;
    double gpa;
        system("cls");
        cout<<"********** Matcher **********"<<endl;
        cout<<"Name:";
        cin>>name;
        basicInfo<<name<<endl;
        otherInfo<<name<<"\t";
        basicInfo.close();
        cout<<"Age: ";
        cin>>age;
        otherInfo<<age<<"\t";
        cout<<"Sex: ";
        cin>>sex;
        otherInfo<<sex<<"\t";
        cout<<"Department: ";
        cin>>department;
        otherInfo<<department<<"\t";

        cout<<"What is your favorite programing language \n \t 1. C++ \n \t 2. Java \n \t 3. Python \n \t 4. JavaScript"<<endl;
        cin>>choice1;
        otherInfo<<choice1<<",";

        cout<<"Who do you think is the better programmer? \n \t 1. Someone who went to university and has at least a masters in their in their field. \n \t 2. Someone who has been coding since they were 5 and simply goes by raw talent."<<endl;
        cin>>choice2;
        otherInfo<<choice2<<",";

        cout<<"Which do you prefer? \n \t 1. Indoors \n \t 2. Outdoors"<<endl;
        cin>>choice3;
        otherInfo<<choice3<<",";

        cout<<"If something needs to be done properly: \n \t 1. Get the team together and discuss the best way of solving the problem. \n \t 2. Do it yourself."<<endl;
        cin>>choice4;
        otherInfo<<choice4<<",";

        cout<<"When you program you: \n \t 1. Shut the door and the rest of the world out.  \n \t 2. Discuss with friends and mentors."<<endl;
        cin>>choice5;
        otherInfo<<choice5<<",";

        cout<<"Other hobby: \n \t 1. Reading.  \n \t 2. Dancing. \n \t 3. writing. \n \t 4. Painting."<<endl;
        cin>>choice6;
        otherInfo<<choice6<<",";

        cout<<"Comments should be placed: \n \t 1. To explain anything that may seem ambiguous.  \n \t 2. Only when a programmer isn't good enough to explain themselves in variable and function names."<<endl;
        cin>>choice7;
        otherInfo<<choice7<<",";

        cout<<"Which do you prefer: \n \t 1. Rainy day.  \n \t 2. Sunny day. "<<endl;
        cin>>choice8;
        otherInfo<<choice8<<endl;

        otherInfo.close();
        cout<<"Done"<<endl;
        system("pause");
        menu();
}



void fileToStructure(){
        int memberNum = 0, x=0;
        string sth;
        ifstream basic("nameandpass.txt");
        while(getline(basic, sth)){
             memberNum++;
                                }
        basic.close();

        user members[memberNum];
        string temp;
        ifstream info("usersInformation.txt");
        while(getline(info, temp)){
            stringstream ss(temp);
            getline(ss, members[x].name,'\t');
            getline(ss, members[x].age,'\t');
            getline(ss, members[x].sex,'\t');
            getline(ss, members[x].department,'\t');
            for(int k=0; k<8; k++){
                getline(ss, members[x].personalityTestResult[k],',');
            }
            x++;
            }
            cout<<"Name \tAge \tSex \tDepartment \t Personality test result"<<endl;
            for(int i=0; i<memberNum; i++){
            cout<<members[i].name<<"\t";
            cout<<members[i].age<<"\t";
            cout<<members[i].sex<<"\t";
            cout<<members[i].department<<"\t\t";
            for(int j=0; j<8; j++){
                if(j==7){
                cout<<" "<<members[i].personalityTestResult[j];
                }
                else
                cout<<" "<<members[i].personalityTestResult[j]<<",";
            }
            cout<<endl;

           }
        match(members, memberNum);
}
void match(user members[], int memberNum){

     for(int i=0; i<memberNum; i++){
       for(int j=0; j<memberNum; j++){
            int counter = 0;
            if(i==j){
                continue;
            }
            else{
            for(int k = 0; k<8; k++){
            if (members[i].personalityTestResult[k] == members[j].personalityTestResult[k]){
                counter ++;
                }
            }}
            members[i].matchCounter.push_back(counter);
     }
}
        for(int i=0; i<memberNum; i++){
            for(int j=0; j<memberNum -1; j++){
                cout<<members[i].matchCounter[j]<<", ";
            }
            cout<<endl;
        }
        int x[memberNum];
        for(int i=0; i<memberNum; i++){
            x[i]=0;
        }
        for(int i=0; i<memberNum; i++){
            int y = members[i].matchCounter[0];
            for(int j=0; j<memberNum-1; j++){
                if(members[i].matchCounter[j]>y){
                y=members[i].matchCounter[j];
                x[i] = j+1;
             }
            }
        }
        for(int i=0; i<memberNum; i++){
            cout<<x[i]<<endl;
        }
        for(int i=0; i<memberNum; i++){
            cout<<"The best match for "<<members[i].name<<" is "<<members[x[i]].name<<endl;
        }
        system("pause");
}
