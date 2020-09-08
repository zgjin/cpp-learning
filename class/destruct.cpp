#include <iostream>

using namespace std;

class VLA{
public:
  VLA(int len);
  ~VLA();

public:
  void input();
  void show();

private:
  int *at(int i);

private:
  const int m_len;
  int *m_arr;
  int *m_p;
};

VLA::VLA(int len): m_len(len) {
  if (len > 0) {
    m_arr = new int[len];
  } else {
    m_arr = NULL;
  }
}

VLA::~VLA() {
  delete[] m_arr;
}

void VLA::input() {
  
}