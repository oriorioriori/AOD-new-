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
        // id ��������
		void setIdStudent(int id)
        {
            id_student = id;
        }
        // ��������� id
        int getIdStudent()
        {
            return id_student;
        }
        // ��� ��������
        void setName(string student_name)
        {
            name = student_name;
        }
        // ������� �����
        string getName()
        {
            return name;
        }
        // ������� ��������
        void setLastName(string student_last_name)
        {
            last_name = student_last_name;
        }
        // ������� �������
        string getLastName()
        {
            return last_name;
        }
        // ������
        void setGroup(string student_group)
        {
            group = student_group;
        }
        // ������� ������
		string getGroup()
        {
         return group;
        }
        // ��������� ������ 
        void setScholarship(string student_scholarship)
        {
            scholarship = student_scholarship;
        }
        // ������� ������ ���������
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
