#include <iostream>

using namespace std;

// 轮胎类
class Tyre {
  public:
    Tyre(int radius, int width);
    void show() const; // const 函数
    /*
    ** （1）不能修改成员变量；  
    *  （2）不能调用非const函数；  
    *  （3）其他const函数可以调用它；（其他非const函数当然也可以调用它）  
    *  （4）只能从const对象（或引用用指针）上调用，比如：const   A   a;   a.f();
    */

  private:
    int m_radius;
    int m_width;
};

Tyre::Tyre(int radius, int width):m_radius(radius), m_width(width){};
void Tyre::show() const {
  cout << "轮毂半径："<< this->m_radius << "寸" << endl;
  cout << "轮胎宽度：" << this->m_width << "mm" << endl;
}

// 引擎类
class Engine {
  public:
    Engine(float displacement = 2.0);
    void show() const;
  private:
    float m_displacement;
};

Engine::Engine(float displacement) : m_displacement(displacement){}
void Engine::show() const {
  cout << "排量：" << this->m_displacement << "L" << endl;
}

class Car {
  public:
    Car(int price, int radius, int width);
    void show() const;
  private:
    int m_price;
    Tyre m_type;
    Engine m_engine;
};

Car::Car(int price, int radius, int width): m_price(price), m_type(radius, width) {};
void Car::show() const {
  cout << "价格" << this->m_price << "￥" << endl;
  this->m_type.show();
  this->m_engine.show();
}

int main()
{
    Car car(200000, 19, 245);
    car.show();
    return 0;
}