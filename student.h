#ifndef STUDENTS_H
#define STUDENTS_H
#include <string>
#include <sstream>


using std::string;

class Student{
    public:
        Student()
        {
            id_student = 0;
            name = "";
            last_name = "";
            group = "";
            scholarship = "";
        }
        Student(int id_student, string name, string last_name, string group, string scholarship)
        {
            this -> id_student = id_student;
            this -> name = name;
            this -> last_name = last_name;
            this -> group = group;
            this -> scholarship = scholarship;
        }
        // id студента
		void setIdStudent(int id)
        {
            id_student = id;
        }
        // Получение id
        int getIdStudent()
        {
            return id_student;
        }
        // Имя студента
        void setName(string student_name)
        {
            name = student_name;
        }
        // Возврат имени
        string getName()
        {
            return name;
        }
        // Фамилия студента
        void setLastName(string student_last_name)
        {
            last_name = student_last_name;
        }
        // Возврат фамилии
        string getLastName()
        {
            return last_name;
        }
        // Группа
        void setGroup(string student_group)
        {
            group = student_group;
        }
        // Возврат группы
		string getGroup()
        {
         return group;
        }
        // Стипендия чистая 
        void setScholarship(string student_scholarship)
        {
            scholarship = student_scholarship;
        }
        // Возврат чистой стипендии
		string getScholarship()
        {
         return scholarship;
        }
        
        string getStudentInfo()
        {
            std::stringstream out_str;
            out_str <<"id Student: " << id_student << "\n"
                    << "Last Name: " << last_name << "\n"
                    << "Name: " << name << "\n"
                    << "Group: " << group << "\n";
                    << "Scholarship: " << scholarship << "\n";
            return out_str.str();
        }

    protected:
        int id_student;
        string name;
        string last_name;
        string group;
        string scholarship;
};
#endif
