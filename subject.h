#ifndef SUBJECT_H_INCLUDED
#define SUBJECT_H_INCLUDED
#include <string>

using std::string;

class Subject{

    public:
        Subject()
        {
            id_subject = 0;
            subject_name = "";
            grade = 0.0; 
        }
        
        Subject(int id_subject, string subject_name, float grade)
        {
            this -> id_subject = id_subject;
            this -> subject_name = subject_name;
            this -> grade = grade;
        }
      void setIdSubject(int id)
        {
            id_subject = id;
        }
        
        int getIdSubject()
        {
            return id_subject;
        }
        
        void setSubjectName(string name)
        {
            subject_name = name;
        }
        
        string getSubjectName()
        {
            return subject_name;
        }
           
		void setGrade(float grade_subject)
        {
            grade = grade_subject;
        }
        
        float getGrade()
        {
            return grade;
        }
    private:
        int id_subject;
        string subject_name;
        float grade;
};
#endif 
