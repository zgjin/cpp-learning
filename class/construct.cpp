#include <iostream>

using namespace std;

class Student {
private:
  char *m_name;
  int m_age;
  float m_score;
public:
  Student(char *name, int age, float score);
  Student(char *name);
  void show();
};

Student::Student(char *name, int age, float score) {
  this->m_name = name;
  this->m_age = age;
  this->m_score = score;
}

Student::Student(char *name): m_name(name) {
  this->m_age = 0;
  this->m_score = 0;
};

void Student::show() {
  cout<<this->m_name<<"的年龄是"<<this->m_age<<"，成绩是"<<this->m_score<<endl;
}

int main(){
    //创建对象时向构造函数传参
    Student stu("小明", 15, 92.5f);
    stu.show();
    //创建对象时向构造函数传参
    Student *pstu = new Student("李华", 16, 96);
    pstu -> show();


    Student stu1("foo");
    stu1.show();
    return 0;
}
