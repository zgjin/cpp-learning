#include <iostream>

using namespace std;

void func(int n, float b = 1.2, char c = '@') {
  cout<<n<<"，"<<b<<"，"<<c<<endl;
}

int main() {
  func(10, 3.5, '#');

  func(20, 9.8);

  func(30);
}