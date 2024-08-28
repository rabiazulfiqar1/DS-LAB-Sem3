#include<iostream>
using namespace std;

class Exam
{
    string studentName;
    int examDate;
    float score;

public:
    void PrintDetails()
    {
        cout << "Student name: " << studentName << endl;
        cout << "Exam date: " << examDate << endl;
        cout << "Score: " << score << endl;
    }

    void SetStudentName( string name )
    {
        studentName = name;
    }
    void SetExamDate( int date )
    {
        examDate = date;
    }
    void SetScore( float score )
    {
        this->score = score;
    }
};

int main()
{
    /*In current example, generating a shallow copy won't result in potential issues as we are dealing with basic data types(string, int, float). But if we deal with pointers or dynamic allocation, shallow copy would result in copying the same memory address due to which modifying one would change other too.*/

    Exam e1;
    e1.SetStudentName( "Talha" );
    e1.SetExamDate( 12 );
    e1.SetScore( 50.0 );
    e1.PrintDetails();
    Exam e2 = e1;
    e2.PrintDetails();

    cout << "--------------------" << endl;

    e2.SetExamDate( 13 );
    e2.SetScore( 90.0 );
    e2.PrintDetails();
    e1.PrintDetails();
}

