#ifndef GOODSTUDENT_H_INCLUDED
#define GOODSTUDENT_H_INCLUDED
#include "Students.h"
#include <string>

class GoodStudent : public Student {
    public:
        GoodStudent(): Student()
        {
            percent=0;
        }

        GoodStudent(int id_student, string name, string last_name, string groupe, string scholarship, int percent): Student(id_student, name, last_name, group, scholarship)
        {
            this -> percent = percent;
        }


        void getPercent(int percent_student)
        {
            percent = percent_student;
        }
        int getPercent()
        {
            return percent;
        }
        void applyPercent(float* a_scholarship)
        {
            *a_scholarship = *a_scholarship - (*a_scholarship * (percent / 100.0));
        }

        string getGoodStudentInfo()
        {
            std::stringstream out_str;
            out_str << "id GoodStudent: " << id_student << "\n"
                    << "Last Name: " << last_name << "\n"
                    << "Name: " << name << "\n"
                    << "Groupe: " << grope << "\n"
                    << "Scholarship: " << scholarship << "\n"
                    << "Percent: " << percent << "\n";

            return out_str.str();
        }

    private:
        int percent;

};
#endif 
