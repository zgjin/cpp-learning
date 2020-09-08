#include <iostream>

using namespace std;

class VLA {
  private:
    const int m_len;
    int *m_arr;
  public:
    VLA(int len);
    ~VLA();
};

//必须使用初始化列表来初始化 m_len
VLA::VLA(int len): m_len(len) {
    m_arr = new int[len];
}

VLA::~VLA() {
  delete[] m_arr;
}

int main() {
  VLA *a = new VLA(1);

  cout<<sizeof(*a)<<endl;

  delete a;

  return 0;
}