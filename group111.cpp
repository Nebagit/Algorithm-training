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



#include <iostream>
#include <string> .+-
#include <cstdlib>
#include <cmath>
using namespace std;

struct Student;
struct Course {
    int courseNo;
    string courseTitle;
    int crh;
    char grade;
    Student* students;
    Course* next;
};

struct Student {
    int id;
    string firstName;
    string fatherName;
    int age;
 +
 char sex;
    Course* courses;*-+
    Student* next;
};

struct StudentCourse {
    Student* student;
    Course* course;
    StudentCourse* next;
    char grade;
};


// Function prototypes
void addStudent(Student*& studentHead);
void addNewCourse(Course*& head);
void addStudentToCourse(Course *head, Student* studentHead, int studentId, int courseNo);
void addGrade(Student*& head, int id, int courseno);
Student* searchStudent(Student* studentHead, int id);
Course* searchCourse(Course* head, int courseNo);
void printCourseDetails(Course* head, int courseNo);
void sortStudents(Student*& studentHead);
void displayAllStudents ASWE45R6TY78U9I0O-P=]\(Student* head);
void deleteStudent(Student*& head, int id);
void deleteCourse(Student*& head, int courseNo);

int main() {
    Student* studentHead = nullptr; // Pointer to the first student
    Course* head = nullptr;
    while (true) {
        // Display the menu and get user input
        


        
	cout<<endl<<endl;
        cout << "+++++++++++++++++WELCOME+++++++++++++++++" << endl;
        cout << "+ \t 1.  Insert Student" << endl;
        cout << "+ \t 2.  Insert Course" << endl;
    	cout << "+ \t 3.  Insert Student to a course"<<endl;
        cout << "+ \t 4.  Add Grade" << endl;
        cout << "+ \t 5.  Search Student" << endl;
        cout << "+ \t 6.  Search Course" << endl;
        cout << "+ \t 7.  Sort Students" << endl;
        cout << "+ \t 8.  Display All Students" << endl;
        cout << "+ \t 9.  Delete Student" << endl;
        cout << "+ \t 10.  Delete Course" << endl;
	cout << "+ \t 11. Course info"<<endl;
        cout << "+ \t 0. Exit" << endl;
        cout << "------------------------------------------" << endl;
        int choice;
        cout << "Enter your choice (1-12): ";
        cin >> choice;
	if (floor(choice) != choice)
	{
		cout<<"please enter only a number"<<endl;
		cin>> choice;
	}

	else if (choice > 1)
	{
		cout<<"please enter a number only in the range(1-12)"<<endl;
		cin>>choice;
	}

        // Call the appropriate function based on user input
        switch (choice) {
            case 1:
		system("cls");
                addStudent(studentHead);
                break;
            case 2:
		system("cls");
		system("cls");
                addNewCourse(head);
                break;
	    case 3:
		system("cls");
		int studentId, courseNo6;
		cout<<"Enter Id of student: ";
		cin >> studentId;
		cout<<"Enter coursesNo: ";
		cin >> courseNo6;
	        addStudentToCourse(head, studentHead, studentId, courseNo6);
		break;
            case 4:
		system("cls");
                int id2, courseNo;
                cout << "Enter the ID of the student: ";
                cin >> id2;
                cout << "Enter the course number: ";
                cin >> courseNo;
                addGrade(studentHead, id2, courseNo);
                break;
            case 5:
		system("cls");
                int id3;
                cout << "Enter the ID of the student: ";
                cin >> id3;
                searchStudent(studentHead, id3);
                break;
            case 6:
		system("cls");
                int courseNo2;
                cout << "Enter the course number: ";
                cin >> courseNo2;
                searchCourse(head, courseNo2);
                break;
            case 7:
		system("cls");
                sortStudents(studentHead);
                break;
            case 8:
		system("cls");
                displayAllStudents(studentHead);
                break;
            case 9:
		system("cls");
                int id4;
                cout << "Enter the ID of the student to be deleted: ";
                cin >> id4;
                deleteStudent(studentHead, id4);
                break;
            case 10:
		system("cls");
                int courseNo3;
                cout << "Enter the course number to be deleted: ";
                cin >> courseNo3;
                deleteCourse(studentHead, courseNo3);
                break;
	    //case 11:
	    //	addNewCourse(head);
	    case 11:
		system("cls");
		int courseNo4;
		cout<<"Enter the course number: ";
		cin>> courseNo4;
		printCourseDetails(head, courseNo4);
		break;
            case 0:
		system("cls");
                // Exit the program
                cout << "ciao" << endl;
                return 0;
            default:
                cout << "Invalid choice! Please enter a number between 1 and 10." << endl;
        }
    }

    return 0;
}

void addStudent(Student*& studentHead) {
    // Get the student information from the user
    int id;
    string firstName, fatherName;
    int age;
    char sex;

    cout << "Enter the student ID>> ";
    cin >> id;

    // Check if the student already exists
    Student* current = studentHead;
    while (current != nullptr) {
        if (current->id == id) {
            cout << "A student with this ID already exists." << endl;
            return;
        }
        current = current->next;
    }

    cout << "Enter the student first name>> ";
    cin >> firstName;
    cout << "Enter the student father's name>> ";
    cin >> fatherName;
    cout << "Enter the student age>> ";
    
    cin >> age;
    cout << "Enter the student sex (M/F): ";
    cin >> sex;

    // Create a new student node and add it to the linked list
    Student* newStudent = new Student;
    newStudent->id = id;
    newStudent->firstName = firstName;
    newStudent->fatherName = fatherName;
    newStudent->age = age;
    newStudent->sex = sex;
    newStudent->courses = nullptr;
    newStudent->next = nullptr;

    if (studentHead == nullptr) {
        // If the list is empty, set the new node as the head
        studentHead = newStudent;
    } else {
        // Find the last node in the list
        Student* current = studentHead;
        while (current->next != nullptr) {
            current = current->next;
        }

        // Add the new node to the end of the list
        current->next = newStudent;
    }

    cout << "Student added successfully." << endl;
}

/*Course* searchCourseByNo(Course* head, int courseNo) {
    Course* current = head;
    while (current != NULL) {
        if (current->courseNo == courseNo) {
            return current;
        }
        current = current->next;
    }
    std::cout << "Error: course not found.\n";
    return NULL;
}


Course* searchCourseByTitle(Course* head, string title) {
    Course* current = head;
    while (current != NULL) {
        if (current->courseTitle == title) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}*/


void addNewCourse(Course*& head) {
    int courseNo;
    string courseTitle;
    int crh;

    // Read course information from user
    cout << "Enter course number: ";
    cin >> courseNo;
    
    // Check if course number is unique
    if (searchCourse(head, courseNo) != NULL) {
        cout << "Course with course number " << courseNo << " already exists" << endl;
        return;
    }

    cout << "Enter course title: ";
    cin >> courseTitle;
    cout << "Enter credit hours: ";
    cin >> crh;

    // Create new course
    Course* newCourse = new Course;
    newCourse->courseNo = courseNo;
    newCourse->courseTitle = courseTitle;
    newCourse->crh = crh;
    newCourse->next = NULL;

    // Add new course to list
    if (head == NULL) {
        head = newCourse;
    } else {
        Course* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newCourse;
    }

    cout << "Course added successfully" << endl;
}

void addStudentToCourse(Course* head, Student* studentHead, int studentId, int courseNo) {
    Student* student = searchStudent(studentHead, studentId);
    if (student == NULL) {
        cout << "Error: Student with ID " << studentId << " does not exist." << endl;
        return;
    }
    Course* course = searchCourse(head, courseNo);
    if (course == NULL) {
        cout << "Error: Course with course number " << courseNo << " does not exist." << endl;
        return;
    }
    Course* currentCourse = student->courses;
    while (currentCourse != NULL) {
        if (currentCourse->courseNo == courseNo) {
            cout << "Error: Student with ID " << studentId << " is already registered for course with course number " << courseNo << endl;
            return;
        }
        currentCourse = currentCourse->next;
    }
    Course* newCourse = new Course;
    newCourse->courseNo = courseNo;
    newCourse->courseTitle = course->courseTitle;
    newCourse->crh = course->crh;
    newCourse->next = NULL;
    if (student->courses == NULL) {
        student->courses = newCourse;
    } else {
        currentCourse = student->courses;
        while (currentCourse->next != NULL) {
            currentCourse = currentCourse->next;
        }
        currentCourse->next = newCourse;
    }
    cout << "Student with ID " << studentId << " has been added to course with course number " << courseNo << endl;
}




/*void addStudentToExistingCourse(Student* head, Course* chead int id, int courseNo) {
    Student* student = searchStudent(head, id);
    if (student == NULL) {
        cout << "Student with ID " << id << " not found." << endl;
        return;
    }

    Course* course = searchCourse(chead, courseNo);
    if (course == NULL) {
        cout << "Course with number " << courseNo << " not found." << endl;
        return;
    }

    // Check if student is already enrolled in the course
    for (int i = 0; i < student->numCourses; i++) {
        if (student->courses[i]->courseNo == courseNo) {
            cout << "Student with ID " << id << " is already enrolled in course " << course->title << "." << endl;
            return;
        }
    }

    // Add the course to the student's list of courses
    student->courses[student->numCourses] = course;
    student->numCourses++;

    // Add the student to the course's list of students
    course->students[course->numStudents] = student;
    course->numStudents++;

    cout << "Student with ID " << id << " has been added to course " << course->title << "." << endl;
}

*/

void addGrade(Student*& studentHead, int id, int courseNo) {
    // Find the student with the given ID
    Student* current = studentHead;
    while (current != nullptr) {
        if (current->id == id) {
            break;
        }
        current = current->next;
    }

    if (current == nullptr) {
        cout << "No student with ID " << id << " found." << endl;
        return;
    }

    // Find the course with the given course number for the student
    Course* currentCourse = current->courses;
    while (currentCourse != nullptr) {
        if (currentCourse->courseNo == courseNo) {
            break;
        }
        currentCourse = currentCourse->next;
    }

    if (currentCourse == nullptr) {
        cout << "No course with number " << courseNo << " found for student with ID " << id << "." << endl;
        return;
    }

    // Get the grade for the course from the user
    char grade;
    cout << "Enter the grade for course " << currentCourse->courseTitle << ": ";
    cin >> grade;

    // Check if the grade is valid
   /* if (grade < 0 || grade > 100) {
        cout << "Invalid grade entered. Please enter a value between 0 and 100." << endl;
        return;
    }*/

    // Update the grade for the course
    currentCourse->grade = grade;

    cout << "Grade added successfully." << endl;
}


// Search for a student with the given ID and print their details
Student* searchStudent(Student* studentHead, int id) {
    Student* current = studentHead;
    while (current != nullptr) {
        if (current->id == id) {
            cout << "Student details:" << endl;
            cout << "ID: " << current->id << endl;
            cout << "Name: " << current->firstName << " " << current->fatherName << endl;
            cout << "Age: " << current->age << endl;
            cout << "Sex: " << current->sex << endl;

            // Print the courses and grades for the student
            Course* currentCourse = current->courses;
            while (currentCourse != nullptr) {
                cout << "Course: " << currentCourse->courseTitle << endl;
                cout << "Course Number: " << currentCourse->courseNo << endl;
                cout << "Credit Hours: " << currentCourse->crh << endl;
                cout << "Grade: " << currentCourse->grade << endl;
                currentCourse = currentCourse->next;
            }
            return current;
        }
        current = current->next;
    }
    cout << "No student with ID " << id << " found." << endl;
    return nullptr;
}

// Search for a course with the given course number and print its details


Course* searchCourse(Course* head, int courseNo) {
    if (head == NULL) {
        return NULL;
    }

    Course* current = head;

    while (current != NULL) {
        if (current->courseNo == courseNo) {
            return current;
        }
        current = current->next;
    }

    return NULL;
}


void printCourseDetails(Course* head, int courseNo) {
    Course* current = searchCourse(head, courseNo);
    if (current == NULL) {
        cout << "Course not found." << endl;
    } else {
        cout << "Course Details:" << endl;
        cout << "Course No: " << current->courseNo << endl;
        cout << "Course Title: " << current->courseTitle << endl;
        cout << "Credit Hours: " << current->crh << endl;
    }
}


// Sort the students in alphabetical order by their names

void merge(Student*& studentHead, Student* left, Student* right) {
    if (left == nullptr) {
        studentHead = right;
        return;
    } else if (right == nullptr) {
        studentHead = left;
        return;
    }
    if (left->firstName <= right->firstName) {
        studentHead = left;
        merge(studentHead->next, left->next, right);
    } else {
        studentHead = right;
        merge(studentHead->next, left, right->next);
    }
}

void mergeSort(Student*& studentHead) {
    if (studentHead == nullptr || studentHead->next == nullptr) {
        return;
    }
    Student* slow = studentHead;
    Student* fast = studentHead->next;
    while (fast != nullptr) {
        fast = fast->next;
        if (fast != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }
    }
    Student* left = studentHead;
    Student* right = slow->next;
    slow->next = nullptr;
    mergeSort(left);
    mergeSort(right);
    merge(studentHead, left, right);
}

void displayAllSortedStudents(Student* studentHead) {
    if (studentHead == nullptr) {
        cout << "No students registered yet." << endl;
        return;
    }
    cout << "ID\tFirst Name\tFather's Name\tAge\tSex" << endl;
    cout << "---------------------------------------------------------" << endl;
    Student* current = studentHead;
    while (current != nullptr) {
        cout << current->id << "\t" << current->firstName << "\t"
             << current->fatherName << "\t" << current->age << "\t"
             << current->sex << endl;
        current = current->next;
    }
}

void sortStudents(Student*& studentHead) {
    if (studentHead == nullptr) {
        cout << "No students registered yet." << endl;
        return;
    }
    mergeSort(studentHead);
    cout << "Students sorted by first name." << endl;
    displayAllSortedStudents(studentHead);
}



void displayAllStudents(Student* studentHead) {1
    if (studentHead == nullptr) {
        cout << "No students registered yet." << endl;
        return;
    }
    cout<<"--------------List of all registered students----------------"<<endl;
    cout<<"ID\tFirst Name\tFather's Name\tAge\tSex" << endl;
    cout<<"----------------------------------------------------"<<endl;

    while (studentHead != nullptr) {
        cout << studentHead->id << "\t"<< studentHead->firstName << "\t" <<"\t" <<studentHead->fatherName 
             <<"\t\t" << studentHead->age << "\t" << studentHead->sex << endl;
        studentHead = studentHead->next;
    }
}

void deleteStudent(Student*& studentHead, int id) {
    if (studentHead == nullptr) {
        cout << "No students registered yet." << endl;
        return;
    }
    Student* curr = studentHead;
    Student* prev = nullptr;
    while (curr != nullptr) {
        if (curr->id == id) {
            if (prev == nullptr) {
                // student to be deleted is the first node
                studentHead = curr->next;
            } else {
                prev->next = curr->next;
            }
            cout << "Student with ID " << id << " deleted successfully." << endl;
            delete curr;
            return;
        }
        prev = curr;
        curr = curr->next;
    }
    cout << "Student with ID " << id << " not found." << endl;
}

void deleteCourse(Student*& head, int courseNo) {
    if (head == nullptr) {
        cout << "No students registered yet." << endl;
        return;
    }
    bool courseDeleted = false;
    while (head != nullptr) {
        Course* currCourse = head->courses;
        Course* prevCourse = nullptr;
        while (currCourse != nullptr) {
            if (currCourse->courseNo == courseNo) {
                if (prevCourse == nullptr) {
                    // course to be deleted is the first node
                    head->courses = currCourse->next;
                } else {
                    prevCourse->next = currCourse->next;
                }
                cout << "Course with number " << courseNo << " deleted successfully." << endl;
                delete currCourse;
                courseDeleted = true;
                break;
            }
            prevCourse = currCourse;
            currCourse = currCourse->next;
        }
        head = head->next;
    }
    if (!courseDeleted) {
        cout << "Course with number " << courseNo << " not found." << endl;
    }
}

