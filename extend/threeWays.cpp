#include <iostream>

using namespace std;

class People {
  public:
    void setName(char *name);
    void setAge(int age);
    void setHobby(char *hobby);
    char *getHobby();
  protected:
    char *m_name;
    int m_age;
  private:
    char *m_hobby;
};

void People::setName(char *name){
  this->m_name = name;
}
void People::setAge(int age) {
  this->m_age = age;
}
void People::setHobby(char *hobby) {
  this->m_hobby = hobby;
}
char *People::getHobby() {
  return this->m_hobby;
}

class Student: public People {
  public:
    void setScore(float score);
  protected:
    float m_score;
};
void Student::setScore(float score) {
  this->m_score = score;
}

class Pupil: public Student {
  public:
    void setRanking(int ranking);
    void display();
  private:
    int m_ranking;
};

void Pupil::setRanking(int ranking) {
  m_ranking = ranking;
}
void Pupil::display() {
  cout<<m_name<<"的年龄是"<<m_age<<"，考试成绩为"<<m_score<<"分，班级排名第"<<m_ranking<<"，TA喜欢"<<getHobby()<<"。"<<endl;
}

int main(){
    Pupil pup;
    pup.setName("小明");
    pup.setAge(15);
    pup.setScore(92.5f);
    pup.setRanking(4);
    pup.setHobby("乒乓球");
    pup.display();
    return 0;
}