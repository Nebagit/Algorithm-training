
/*Group Memebers

1. Nebiyu Tefera..........................UGR/1425/13
2. Yohannes Legessu.......................UGR/7917/13
3. Yordanos Firew.........................UGR/2034/13
4. Yohannes Melesse.......................UGR/3421/13
5. Yosef Melkamu..........................UGR/1339/13
6. Aman Zewdie............................UGR/1374/13
7. Zubeyr Anwar...........................UGR/0632/13
8. Yonatan Birhanu........................UGR/2232/13
9. Kranz Aklilu.......................... UGR/8298/13
*/

#include<iostream>
#include<cstring>
#include<fstream>
#include<iomanip>
using namespace std;
struct Student
{
   string Id;
   string Fname;
   string Lname;
   string dep;
   string sex;
   int age;
   char grade;
     Student* next;
};
struct Course
{
  string courseTitle;;
  string courseNo;
   float crh;
   string Id;
    float mark;
   Course* next;
};
Student* head = NULL; 
Course* startPtr = NULL;
void InsertStudent(string Id,string Fname,string Lname,string dep,string sex,int age)
{
  Student* temp = new Student;
  temp->age =  age;
  temp->Fname = Fname;
  temp->Lname = Lname;
  temp->dep = dep;
  temp->sex = sex;
  temp->Id = Id;
  temp->next = NULL;
  if(head == NULL){
   head = temp;
  }
   else
   {
     temp->next = head;
     head = temp;
   }
}
bool isrgister(string id)
{
  Student* temp = head;
  while ( temp != NULL)
  {
    if(id.compare(temp->Id) == 0)
     return true;
     temp = temp->next;
  }
   return false;
}
bool isregisterCourse(string courseNo)
{
  Course* temp = startPtr;
  while ( temp != NULL)
  {
     if(courseNo.compare(temp->courseNo) == 0)
     return true;
     temp = temp->next;
  }
   return false;
} 

void InsertCourse(string Id,string courseTitle,string courseNo,float crh)
{
  Course* temp = new Course;
  temp->Id = Id;
  temp->courseTitle = courseTitle;
  temp->courseNo = courseNo;
  temp->crh = crh;
  temp->next = NULL;
  if(startPtr == NULL){
   startPtr = temp;
  }
   else
   {
     temp->next = startPtr;
     startPtr = temp;
   }
}
void maintainGrade(string id, string courseNo,float mark)
{
Student* temp1 = head;
Course* temp2 = startPtr;
temp2->mark = mark;
  if(mark > 100 || mark < 0)
    cout<<"Error :  invalid input ";
  
  else if(mark <= 100 && mark >= 83)
  temp1->grade = 'A';
  else if(mark < 83 && mark >= 75)
  temp1->grade = 'B';
  else if(mark < 75 && mark >= 60)
  temp1->grade = 'C';
  else if(mark < 60 && mark >= 50)
  temp1->grade = 'D';
  else temp1->grade = 'F';
}
void searchStudent(string Id)
{
 
  Student* temp = head;
  while ( temp != NULL)
  {
    if(Id.compare(temp->Id) == 0)
    {
      cout<<"First name  : "<<temp->Fname<<endl;
      cout<<"Last name : "<<temp->Lname<<endl;
      cout<<"Department :  "<<temp->dep<<endl;
      cout<<"Id : "<<temp->Id<<endl;
      cout<<"age : "<<temp->age<<endl; 
      cout<<"sex :  "<<temp->sex<<endl;
      cout<<"grade : "<<temp->grade<<endl;
      return;  
      
    }
    temp = temp->next;
  }
  
}
void searchCourse(string courseNo)
{
  Course* temp = startPtr;
  while (temp != NULL)
  {
    if(courseNo.compare(temp->courseNo) == 0)
    {
      cout<<"Course title : "<<temp->courseTitle<<endl;
      cout<<"Course Number : "<<temp->courseNo<<endl;
      cout<<"Course credit hour : "<<temp->crh<<endl;
       return;
    }
    temp = temp->next;
  }
}

void sort()
{
    Student* i;
    Student* j;
    string temp;
    char  temp1;
    int temp2;
    for ( i = head; i->next != NULL; i= i->next)
    {
        for ( j = i->next ; j->next != NULL; j= j->next)
        {
        if (i->Fname.compare(j->Fname) > 0)
        {
            temp = j->Fname;
            j->Fname = i->Fname;
            i->Fname= temp;
            temp = j->Lname;
            j->Lname = i->Fname;
            i->Fname = temp;
            temp = i->Id;
            i->Id = j->Id;
            j->Id = temp;
            temp = i->dep;
            i->dep = j->dep;
            j->dep = temp;
            temp1 = i->grade;
            i->grade = j->grade;
            j->grade = temp1;
            temp2 = i->age;
            i->age = j->age;
            j->age = temp2;
        }
        
        }    
    }
    cout<<"The record is sucessfully sorted !!!!!"<<endl;
}
void Display()
{
	if(head == NULL)
  {
    cout<<"Empty Record!"<<endl;
    return;
  }
   cout<<"The following record is a valiable now :"<<endl;
  Student* temp = head;
  while ( temp != NULL)
  {   
      cout<<"First name :  "<<temp->Fname<<endl;
      cout<<"Last name : "<<temp->Lname<<endl;
      cout<<"Department : "<<temp->dep<<endl;
      cout<<"Id : "<<temp->Id<<endl;
      cout<<"age : "<<temp->age<<endl; 
      cout<<"sex : "<<temp->sex<<endl;
      cout<<"grade : "<<temp->grade<<endl;
      temp = temp->next;
  }
}

void Delete(string Id)
{
  
  
  Student* temp1 = head;
  Student* temp2 = head;
  while (temp1 != NULL)
  {
    cout<<"The record with Id number"<<Id<<" is found "<<endl;
    if(temp1 == temp2)
    {
      head = head->next;
      delete temp1;
    }
    else
    {
      temp2->next = temp1->next;
      delete temp1;
    }
    cout<<"Record sucessfully deleted "<<endl;
    return;
    
    temp2 = temp1;
    temp1 = temp1->next;
}
}
void DeleteCourse(string courseNo)
{
  Course* temp1 = startPtr;
 Course* temp2 = startPtr;
  while (temp1 != NULL)
  {
    if(temp1 == temp2)
    {
      startPtr = startPtr->next;
      delete temp1;
    }
    else
    {
      temp2->next = temp1->next;
      delete temp1;
    }
    cout<<"Record sucessfully deleted "<<endl;
    return;
    
    temp2 = temp1;
    temp1 = temp1->next;
  } 
}
void UpdateRecourd(string Id)
{
  
  Student* temp = head;
  while (temp != NULL)
  {
       cout<<"Enter New Rewcord for the "<<Id<<" of the student"<<endl;
       cout<<"Enter new Id :";
       cin>>temp->Id;
      cout<<"Enter new First name:";
      cin>>temp->Fname;
      cout<<"Enter new Last name: ";
      cin>>temp->Lname;
      cout<<"Enter new sex :";
      cin>>temp->sex;
      cout<<"Enter the new age: ";
      cin>>temp->age;
      cout<<"Enter the new department: ";
      cin>>temp->dep;
      cout<<"Updation done sucessfully!!!!!\n";
      
    temp = temp->next;
  }
  
}
void intro()
{

    cout<<setw(90)<<"              STUDENT RECORD MANAGEMENT                             "<<endl;
	cout<<setw(80)<<"********************************************************************"<<endl;
	cout<<setw(80)<<"*          WELCOME TO STUDENT RECORD MANAGEMENT                    *"<<endl;
	cout<<setw(80)<<"*                PROJECT                                           *"<<endl;
	cout<<setw(80)<<"*                                                                  *"<<endl;
	cout<<setw(80)<<"*           ADDIS ABABA UNIVERSITY                                 *"<<endl;
	cout<<setw(80)<<"********************************************************************"<<endl;
	cout<<"Press Enter key to start ..................... ";
	
    cin.get();

for(int i=0;i<100;i++){
	    cout<<endl<<endl;
		cout<<"::::::::::::::::::::::::::::::::::::opening the page "<<i<<"%:::::::::::::::::::::::" << endl;

   system("cls");
  }
  }
  
void menu()
{
  cout<<"\n                   ------------WELCOME TO MAIN MENU-----------------        \n\n";
	cout<<"     ***************************************************************************\n";
	cout<<"     *   Enter [1] To  Insert  Student Details                                 *\n";
	cout<<"     *   Enter [2] To  Insert  Course Details                                  *\n";
  cout<<"     *   Enter [3] To  Insert mark to the student                              *\n";
	cout<<"     *   Enter [4] To  Search student by it's ID                               *\n";
	cout<<"     *   Enter [5] To  search course by it's course number                     *\n";
	cout<<"     *   Enter [6] To  Sort student by it's name                               *\n";
	cout<<"     *   Enter [7] To  Display student information                             *\n";
	cout<<"     *   Enter [8] To  Delete student by it's ID                               *\n";
  cout<<"     *   Enter [9] To  Delete a course by it's course Number                   *\n";
  cout<<"     *   Enter [10] To  Update a student record by it's ID                     *\n";
	cout<<"     *   Enter [0] To  Exit                                                    *\n";
	cout<<"     ***************************************************************************\n";
}
int main(int argc, char const *argv[])
{
  fstream file;
  int choice;
  string Id;
  string Fname;
  string Lname;
  string dep;
  string sex;
  int age;
  float mark;
  string courseTitle;
  string courseNo;
  float crh;
  bool check;
  int count = 0;
  int countCourse = 0;
  //intro();
  menu();
  do
  {
  	tryagain:
    cout<<"Enter your choice :";
    cin>>choice;
    switch (choice)
    {
    case 1:
    	tryForId:
    cout<<"Enter the Id :";
    cin>>Id;
    count++;
    check =  isrgister(Id);
    if(count > 1)
    {
    	if(check == true)
    	{
    		cout<<"Error : the same id does't allowed\n";
    		goto tryForId;
		}
	}
    cout<<"Enter the First name :";
    cin>>Fname;
    cout<<"Enter the Last name :";
    cin>>Lname;
    cout<<"Enter the department :";
    cin>>dep;
    cout<<"Enter the sex :";
    cin>>sex;
    cout<<"Enter the age :";
    cin>>age;
    // file.open("studentRecord.txt",ios::app | ios::out);
    // file<<"\t\t\t\tStudent Details\t\n";
    // file<<"\t"<<"ID"<<"\t"<< Id<<"\n\t"<<"Fname"<<"\t"<<Fname<<"\n\t"<<"Lname"<<"\t"<< Lname;
    // file<<"\n\t"<<"Department"<<"\t"<< dep<<"\n\t"<<"Sex"<<"\t"<<sex <<"\n\t"<<"Age"<<"\t"<<age<<"\n";
    // file.close();
    InsertStudent(Id, Fname, Lname, dep, sex, age);
      break;
      case 2:
      	tryAgain:
    cout<<"Enter the student Id : ";
    cin>>Id;
     check = isrgister(Id);
    if(check == false){
	
    cout<<"Error :Please Enter the correct id \n";
	   goto tryAgain;
      } 
    cout<<"Enter the course name :";
    cin>>courseTitle;
    tryForCourseNo:
    cout<<"Enter the course number :";
    cin>>courseNo;
    check = isregisterCourse(courseNo);
    countCourse++;
    if(countCourse > 1)
    {
      if(check == true)
      {
        cout<<"Error : the same course number doesn't allowed" << endl;
        goto  tryForCourseNo;
      }
    }
    cout<<"Enter the credit hour :";
    cin>>crh;
  //   file.open("studentRecord.txt",ios::app | ios::out);
  //   file<<"\n\t\t\t\tStudents Course Details\t\n";
  //  file<<"\t"<<"ID"<<"\t"<< Id<<"\n\t"<<"Course Title"<<"\t"<<courseTitle;
  // file<<"\n\t"<<"Course Number"<<"\t"<<courseNo<<"\n\t"<<"Credit Hour"<<"\t"<<crh<<endl;
  // file.close();
    InsertCourse(Id,courseTitle,courseNo,crh);
    break;
    case 3:
    tryForCourse:
    cout<<"The Id of the student id :";
    cin>>Id;
     check = isrgister(Id);
    if(check == false){
    cout<<"Error :Please Enter the correct id \n";
	goto tryForCourse;
      } 
   tryAgainForMark:
    cout<<"Enter the course number :";
    cin>>courseNo;
    check = isregisterCourse(courseNo);
    if(check == false)
    {
      cout<<"Error : please Enter the correct course Number  "<<endl;
      goto tryAgainForMark;
    }
    cout<<"Enter the mark of the student :";
    cin>>mark;
    maintainGrade( Id,  courseNo, mark);
    break;
    case 4:
    tryForGrade:
    cout<<"Enter the student Id : ";
    cin>>Id;
     check = isrgister(Id);
    if(check == false){
    cout<<"Error : Please Enter correct id \n";
	goto tryForGrade;
      } 
    searchStudent(Id);
    break;
    case 5:
    tryAgainForSearch:
    cout<<"Enter the course number :";
    cin>>courseNo;
    check = isregisterCourse(courseNo);
    if(check == false)
    {
      cout<<"Error : please Enter the correct course Number "<<endl;
      goto tryAgainForSearch;
    }
    searchCourse(courseNo);
    break;
    case 6:
    sort();
    break;
    case 7:
    Display();
    break;
    case 8:
    tryForDelete:
    cout<<"Enter the Id of the student :";
    cin>>Id;
    check = isrgister(Id);
    if (check == false)
    {
      cout<<"Error :Please Enter the correct id Number "<<endl;
      goto tryForDelete;
    }
    Delete(Id);
    break;
    case 9:
    tryForDeleteC:
    cout<<"Enter course number :";
    cin>>courseNo;
    check = isregisterCourse(courseNo);
    if (check == false)
    {
      cout<<"Error : Please Enter the correct course Number "<<endl;
      goto tryForDeleteC;
    }
    DeleteCourse(courseNo);
    case 10:
    tryForUpdateRecord:
    cout<<"Enter the Id of the student :";
    cin>>Id;
    check = isrgister(Id);
    if(check == false)
    {

      cout<<"Error : Please Enter the Correct id  "<<endl;
      goto tryForUpdateRecord;
    }
    UpdateRecourd(Id);
    default:
    cout<<"Invalid choice please Enter your Choice Again!\n ";
    goto tryagain;
      break;
    }
  
  } while (choice != 0);
  
  return 0;
}
