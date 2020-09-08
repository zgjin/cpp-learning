#include <iostream>

using namespace std;

class Student
{
private:
  char *name;
  int age;
  float score;
public:
  ~Student();

  void setName(char *name);
  void setAge(int age);
  void setScore(float score);
  void show();
};

Student::~Student()
{
}

void Student::setName(char *name)
{
  this->name = name;
}

void Student::setAge(int age)
{
  this->age = age;
}

void Student::setScore(float score)
{
  this->score = score;
}

void Student::show()
{
   cout<<this->name<<"的年龄是"<<this->age<<"，成绩是"<<this->score<<endl;
}

int main()
{
  Student stu;
  stu.setName("小明");
  stu.setAge(15);
  stu.setScore(92.5f);
  stu.show();

  Student *pstu = new Student;
  pstu->setName("李华");
  pstu->setAge(16);
  pstu->setScore(96);
  pstu->show();

  return 0;
}
