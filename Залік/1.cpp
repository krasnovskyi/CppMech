#include <iostream>
using namespace std;

class Human {
  public:
    string name = "Anton";   
    string surname = "DGF";
    int year = 2001;
    int month = 4;
    int day = 4;
};

class Student : public Human
{   public:
    string university = "KNU";
    string field = "stat";
    int study_year = 6;
};

class Teacher : public Human
{   public:
    string university = "KNU";
    string subject = "cppppp" ;
};

class Aspirant : public Teacher, public Student
{
    public:
    string kafedra = "matfiz";
};

int main() {
  Aspirant myObj; 
  cout << myObj.subject + " " + myObj.name;
  return 0;
}