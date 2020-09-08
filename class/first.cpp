#include <iostream>

using namespace std;

class Student
{
private:
  /* data */
public:
  char *name;
  int age;
  float score;

  Student(/* args */);
  ~Student();

  void say();
};

Student::Student(/* args */)
{
}

Student::~Student()
{
}

void Student::say(){
  cout<<name<<"的年龄是"<<age<<"，成绩是"<<score<<endl;
}
