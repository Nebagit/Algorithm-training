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
int n,m=0,i,a,j,total=0,rankk=1;

void accept();
int main(){

    accept();


}

void accept(){
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



// cout<<"**************************************************************************\n\t\t*****************************************\n\t\t\t*************************\n";
//     cout<<"\n\t\tNOW YOU HAVE SUCCSSFULLY INSERTED ALL THE INFORMATION OF STUDENTS\n NOW ENTER ZERO IF YOU WANT TO SEE YOUR ENTRY OF DATA WITH THE STUDENTS AVERAGE AND RANK ";
//     cin>>a;
    int total=0,counter=0,sub=1;
  
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                int total=total+s[i].mark[j];
                sub++;
            }
         s[i].average=total/sub;
         sub=1;
         total=0;
        }

        for(i=0;i<n;i++){
      cout<<s[i].name<<"    ";
    for(j=0;j<m;j++){
        cout<<s[i].mark[j]<<" , ";
    }
}
          
    int rankk=1;

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

cout<<"I am here my coder";
        cout<<n<<endl;
        cout<<m<<endl;
    
        }
