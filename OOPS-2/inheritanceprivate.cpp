#include<iostream>
using namespace std;


class Animal
{
public:
int age;
};



class dog:private Animal
{
  public:
  void eat()
  {
    cout<<this->age;
  }
};
int main()
{

dog d1;


d1.eat();










    return 0;
}