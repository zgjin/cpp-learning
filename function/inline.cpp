#include <iostream>

using namespace std;

inline void swap(int *a, int *b) {
  int tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
}

int main() {
  int m, n;

  cin>>m>>n;
  cout<<"m = "<<m<<","<<"n = "<<n<<endl;
  swap(&m, &n);

  cout<<"m = "<<m<<","<<"n = "<<n<<endl;
  return 0;
}