#include <iostream>
#include "student.h"
#include "subject.h"
#include "good_student.h"
#include "list.h"
#include <string>

using std::string;
using std::cout;
using std::cin;

int main()
{
    LinkedList linkedlist;
    Student *student;

    int id_student;
    string name;
    string last_name;
    string groupe;
    for (int i = 0; i < 3; i++)
    {
    // Создание объекта класса Student
    cout << "student id " ;
    cin >> id_student;
    cout << "Name: ";
    cin >> name;
    cout << "Last name: ";
    cin >> last_name;
    cout << "Groupe " << ": ";
    cin >> groupe;
    cout << "Scholarship " << ": ";
    cin >> scholarship;
    student = new Student(id_student, name, last_name, groupe, scholarship);
    linkedlist.add(student);
    }

    linkedlist.printList();


//********************************************************************

    int id_subject;
    cout << "subject id ";
    cin >> id_subject;

    string name_subject;
    cout << "Name: ";
    cin >> name_subject;

    float grade;
    cout << "Grade " ;
    cin >> grade;

    Subject subject(id_subject, name_subject, grade);

    cout << "\nSubject name: " << subject.getSubjectName() << "\n Grade: "
    << Subject.getGrade() << "\n ************************** \n";

//********************************************************************

    cout << "Good student id " ;
    cin >> id_student;
    cout << "Name: ";
    cin >> name;
    cout << "Last name: ";
    cin >> last_name;
    cout << "Group:";
    cin >> groupe;
    cout << "Scholarship:";
    cin >> scholarship;
    
	//Процент отчислений от стипендии в Студенческий Союз и профком
    int percent;
    cout << "Percent: %" ;
    cin >> percent;

    GoodStudent good_student(id_student, name, last_name, groupe, scholarship, percent);


    vip_student.applyPercent(&scholarship);
    cout  << good_student.getGoodStudentInfo()
          << "Scholarship considering percent payments: " << scholarship <<"\n"
          << "************************** \n";
    return 0;
}
