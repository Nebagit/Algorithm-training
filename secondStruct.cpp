#include<iostream>
using namespace std;
struct student{
    string name;
    string id;
    string subName [20];
    double mark [20];
    double average;
    int rank;
};

void accept();
int main(){

    accept();


}

void accept(){

    int n,m=0,i,a,j,rankk=1,sub,counter;
    double total;
        cout<<"\n#########################  THIS IS  AN  APPLICATION FOR STUDENTS  REGISTRATION  SYSTEM  ####################"<<endl;
    cout<<"\t\t#########  SO PLEASE INSERT CAREFULLY TURN BY TURN FOR EACH STUDENTS ######### "<<endl<<endl;
    cout<<"\tPlease enter NUMBER of STUDENTS you want to register: ";
    cin>>n;

student s[n];

for(i=0;i<n;i++){
cout<<"!!!!!!!!!!!!!!!!!!!!!!! NOW FILL ALL THE INFORMATION REQUIRED FOR THE "<<i+1<<" th STUDENT CAREFULLY !!!!!!!!!!!!!!!!!!!!!"<<endl;
cout<<"\nEnter the NAME of the "<<i+1<<" th STUDENT: ";
cin>>s[i].name;
cout<<"\nplease enter the ID of STUDENT: ";
cin>>s[i].id;
  do{
       if(m>20) {cout<<" \n\nOWWW this is not correct a student can't take more than 20 subjects in a semister \nit is Declared in the CONSTITUTIONAL LAW\nSo now Enter the number of sbjects a Student can take: "<<endl;
              cin>>m;
            
            }
        else{
            cout<<"\nEnter the NUMBER of SUBJECTS a Student can take: ";
            cin>>m;
            }
    } while(m>20);

    //   s[i].average[m];
for (int j=0;j<m;j++){
    cout<<"\n****Now Enter the "<<j+1<<" subject information.*****"<<endl;
    cout<<"\nNAME of the "<<j+1<<" th SUBJECT: ";
    cin>>s[i].subName[j];
    cout<<"\nMARK of the "<<j+1<<" th SUBJECT: ";
    cin>>s[i].mark[j];
}
cout<<endl;
}

  
        for(i=0;i<n;i++){

            for(j=0;j<n;j++){

                 total=total+s[i].mark[j];
                sub++;
            }
         s[i].average=total/sub;
                     cout<<s[i].name<<"\t\t"<<s[i].id<<"\t\t"<<s[i].average<<"\t\t"<<endl;

         total=0;
         sub=0;
        }

//         for(i=0;i<n;i++){
//       cout<<s[i].name<<"    ";
//     for(j=0;j<m;j++){
//         cout<<s[i].mark[j]<<" , ";
//     }
//     cout<<endl;
// }
          

        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
            if(s[i].average<s[j].average){
               int temp=s[i].average;
               s[i].average=s[j].average;
               s[j].average=temp;
            //    string nam=s[i].name;
            //    s[i].name=s[j].name;
            //    s[j].name=nam;
            //     string idd=s[i].id;
            //    s[i].id=s[j].id;
            //    s[j].id=idd;

              }
         
              }
            }

            for(i=0;i<n;i++){
                if(s[i].average==s[i+1].average)
            {
                s[i].rank=counter;
                counter++;
            }
            else{
                counter++;
                s[i].rank=counter;
            }
            }
     
cout<<"NAME\t\t"<<"ID\t\t"<<"AVERAGE\t\t"<<"RANK\n";

          for(i=0;i<n;i++){
            cout<<s[i].name<<"\t\t"<<s[i].id<<"\t\t"<<s[i].average<<"\t\t"<<s[i].rank<<endl;
          }

cout<<"I am here my coder"<<endl;
        cout<<n<<endl;
        cout<<m<<endl;
    
        }
