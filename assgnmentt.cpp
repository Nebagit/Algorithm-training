/*
Made by
1.Nebiyu Tefera			UGR/1425/13
2.Yohannes Legessu		UGR/7917/13
3.Yordanos Firew		UGR/2034/13
4.Tesfamikael Solomon	UGR/3255/13
5.Kranz Aklilu			Ugr/8298/13 
6.Yohannes Melesse 		UGR/3421/13

section - 2
4 kilo AAU CS
*/                                    

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

struct user{
    string name,sex,age,department, personalityTestResult[8];
    vector <int> matchCounter;
};
void menu();
void signUp();
void fileToStructure();
void match(user[], int);
void searchMember();
void removeMember();
void displayFile();
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
        cout<<"1. Register"<<endl;
        cout<<"2. Match"<<endl;
        cout<<"3. Search members"<<endl;
        cout<<"4. Remove members"<<endl;
        cout<<"5. Display file"<<endl;
        cout<<"6. exit"<<endl;
        cout<<"*****************************"<<endl;
        cout<<"The purpose of this App is to store the information of several students \nand  create  a suitable  match  for  them based on  their  preferences.";
        cout<<"\nProceed by registering students, then you can run the match function.\n:";
        cin>>choice;
        switch(choice){
          case 1:
            signUp();
            break;
          case 2:
            fileToStructure();
            break;
          case 3:
            searchMember();
            break;
          case 4:
            removeMember();
            break;
          case 5:
            displayFile();
            break;
          case 6:
            exit(0);
            break;
        }}
        while(choice!=5);

}
void signUp(){
     //sign up, then we will have to make a new menu for users who log in and then accept their info
    ofstream otherInfo("usersInformation.txt", ios::app);
    string namee,sex, password, department, interests;
    int age, choice1;
    double gpa;
        system("cls");
        cout<<"********** Matcher **********"<<endl;
        cout<<"Name:";
        cin>>namee;
        otherInfo<<namee<<",";
        cout<<"Age: ";
        cin>>age;
        if(cin.fail()){
          cout<<"\n Invalid entry. \n...";
          system("pause");
          otherInfo.close();
          exit(-1);
    	}
        otherInfo<<age<<",";
        cout<<"Sex: ";
        cin>>sex;
        otherInfo<<sex<<",";
        cout<<"Department: ";
        cin>>department;
        otherInfo<<department<<",";

        system("cls");
        cout<<"What is your favorite programing language \n \t 1. C++ \n \t 2. Java \n \t 3. Python \n \t 4. JavaScript"<<endl;
        cin>>choice1;

        if(choice1!=1&&choice1!=2&&choice1!=3&&choice1!=4){
        	cout<<"error";
        	otherInfo.close();
        	exit(-1);    
		}
        otherInfo<<choice1<<",";
        system("cls");
        cout<<"Who do you think is the better programmer? \n \t 1. Someone who went to university and has at least a masters in their in their field. \n \t 2. Someone who has been coding since they were 5 and simply goes by raw talent."<<endl;
        cin>>choice1;
        if(choice1!=1&&choice1!=2){
        	cout<<"error";
        	otherInfo.close();
        	exit(-1);
		}
        otherInfo<<choice1<<",";
        system("cls");
        cout<<"Which do you prefer? \n \t 1. Indoors \n \t 2. Outdoors"<<endl;
        cin>>choice1;
        if(choice1!=1&&choice1!=2){
        	cout<<"error";
        	otherInfo.close();
        	exit(-1);
		}
        otherInfo<<choice1<<",";
        system("cls");
        cout<<"If something needs to be done properly: \n \t 1. Get the team together and discuss the best way of solving the problem. \n \t 2. Do it yourself."<<endl;
        cin>>choice1;
        if(choice1!=1&&choice1!=2){
        	cout<<"error";
        	otherInfo.close();
        	exit(-1);
		}
        otherInfo<<choice1<<",";
        system("cls");
        cout<<"When you program you: \n \t 1. Shut the door and the rest of the world out.  \n \t 2. Discuss with friends and mentors."<<endl;
        cin>>choice1;
        if(choice1!=1&&choice1!=2){
        	cout<<"error";
        	otherInfo.close();
        	exit(-1);
		}
        otherInfo<<choice1<<",";
        system("cls");
        cout<<"Other hobby: \n \t 1. Reading.  \n \t 2. Dancing. \n \t 3. writing. \n \t 4. Painting."<<endl;
        cin>>choice1;
        if(choice1!=1&&choice1!=2&&choice1!=3&&choice1!=4){
        	cout<<"error";
        	otherInfo.close();
        	exit(-1);
		}
        otherInfo<<choice1<<",";
        system("cls");
        cout<<"Comments should be placed: \n \t 1. To explain anything that may seem ambiguous.  \n \t 2. Only when a programmer isn't good enough to explain themselves in variable and function names."<<endl;
        cin>>choice1;
        if(choice1!=1&&choice1!=2){
        	cout<<"error";
        	otherInfo.close();
        	exit(-1);
		}
        otherInfo<<choice1<<",";
        system("cls");
        cout<<"Which do you prefer: \n \t 1. Rainy day.  \n \t 2. Sunny day. "<<endl;
        cin>>choice1;
        if(choice1!=1&&choice1!=2){
        	cout<<"error";
        	otherInfo.close();
        	exit(-1);
		}
        otherInfo<<choice1<<endl;
        otherInfo.close();
        cout<<"Done"<<endl;
        system("pause");
        menu();
}



void fileToStructure(){
        system("cls");
        int memberNum = 0, x=0;
        string sth;
        ifstream basic("usersInformation.txt");
        while(getline(basic, sth)){
             memberNum++;
        }
        basic.close();
        user members[memberNum];
        string temp;
        ifstream info("usersInformation.txt");
        while(getline(info, temp)){
            stringstream ss(temp);
            getline(ss, members[x].name,',');
            getline(ss, members[x].age,',');
            getline(ss, members[x].sex,',');
            getline(ss, members[x].department,',');
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
             members[i].matchCounter.push_back(0);
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
       // for(int i=0; i<memberNum; i++){
         //   for(int j=0; j<memberNum; j++){
           //     cout<<members[i].matchCounter[j]<<", ";
            //}
            //cout<<endl;
        //}
        int x[memberNum];
        for(int i=0; i<memberNum; i++){
            x[i]=0;
        }
        for(int i=0; i<memberNum; i++){
            int y = members[i].matchCounter[0];
            for(int j=0; j<memberNum; j++){
                if(members[i].matchCounter[j]>y){
                y=members[i].matchCounter[j];
                x[i] = j;
             }
            }
        }
        //for(int i=0; i<memberNum; i++){
          //  cout<<x[i]<<endl;
        //}
        cout<<endl;
        for(int i=0; i<memberNum; i++){
            cout<<"The best match for "<<members[i].name<<" is "<<members[x[i]].name<<"."<<endl;
        }
        cout<<endl;
        system("pause");
        menu();
}

void searchMember(){
    string name;
    cout<<"Enter the user name: ";
    cin>>name;
    int memberNum = 0, x=0;
        string sth;
        ifstream basic("usersInformation.txt");
        while(getline(basic, sth)){
             memberNum++;
        }
        basic.close();
        user members[memberNum];
        string temp;
        ifstream info("usersInformation.txt");
        while(getline(info, temp)){
            stringstream ss(temp);
            getline(ss, members[x].name,',');
            getline(ss, members[x].age,',');
            getline(ss, members[x].sex,',');
            getline(ss, members[x].department,',');
            for(int k=0; k<8; k++){
                getline(ss, members[x].personalityTestResult[k],',');
            }
            x++;
            }
            for (int i=0; i<memberNum; i++){
                if(members[i].name == name){
                cout<<"Name \tAge \tSex \tDepartment \t Personality test result"<<endl;
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
                }
            }
            cout<<endl;
           system("pause");
           menu();

}
void removeMember(){
    string name;
    cout<<"Enter the user name: ";
    cin>>name;
    int memberNum = 0, x=0;
        string sth;
        ifstream basic("usersInformation.txt");
        while(getline(basic, sth)){
             memberNum++;
        }
        basic.close();
        user members[memberNum];
        string temp;
        ifstream info("usersInformation.txt");
        while(getline(info, temp)){
            stringstream ss(temp);
            getline(ss, members[x].name,',');
            getline(ss, members[x].age,',');
            getline(ss, members[x].sex,',');
            getline(ss, members[x].department,',');
            for(int k=0; k<8; k++){
                getline(ss, members[x].personalityTestResult[k],',');
            }
            x++;
            }
            int index=0;
            for (int i=0; i<memberNum; i++){
                if(members[i].name == name){
                index = i;}
                }
           ofstream newFile("usersInformation.txt");
           for(int i=0; i<memberNum; i++){
            if (i == index){
                continue;
            }
            newFile<<members[i].name<<"\t";
            newFile<<members[i].age<<"\t";
            newFile<<members[i].sex<<"\t";
            newFile<<members[i].department<<"\t\t";
            for(int j=0; j<8; j++){
                if(j==7){
                newFile<<" "<<members[i].personalityTestResult[j];
                }
                else
                newFile<<" "<<members[i].personalityTestResult[j]<<",";
            }
            newFile<<endl;
           }
           system("pause");
           menu();
}
void displayFile(){
    int memberNum = 0, x=0;
     string sth;
        ifstream basic("usersInformation.txt");
        while(getline(basic, sth)){
             memberNum++;
        }
        basic.close();
        user members[memberNum];
        string temp;
        ifstream info("usersInformation.txt");
        while(getline(info, temp)){
            stringstream ss(temp);
            getline(ss, members[x].name,',');
            getline(ss, members[x].age,',');
            getline(ss, members[x].sex,',');
            getline(ss, members[x].department,',');
            for(int k=0; k<8; k++){
                getline(ss, members[x].personalityTestResult[k],',');
            }
            x++;
            }
            for(int i=0; i<memberNum; i++){
            cout<<members[i].name<<",";
            cout<<members[i].age<<",";
            cout<<members[i].sex<<",";
            cout<<members[i].department<<",";
            for(int j=0; j<8; j++){
                if(j==7){
                cout<<members[i].personalityTestResult[j];
                }
                else
                cout<<members[i].personalityTestResult[j]<<",";
            }
            cout<<endl;

           }
           system("pause");
           menu();
}