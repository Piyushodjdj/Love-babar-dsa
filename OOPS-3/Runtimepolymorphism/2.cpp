//overriding run-time hotaaaa haiii
#include<iostream>
using namespace std;
class Animal
{
public:
virtual void speak()
{
    cout<<"Speaking";
}

};
class Dog:public Animal
{
public:
void speak()
{
    cout<<"Barking";
}
};

int main()
{


// Animal* a=new Animal();
// a->speak();

// Dog* a=new Dog();

// a->speak();

// Animal* a=new Dog();
// a->speak();



//Down -Casting


// Dog* b=new Animal();
// b->speak();
//Yeh nhi hogaaaaaa






  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
    return 0;
}