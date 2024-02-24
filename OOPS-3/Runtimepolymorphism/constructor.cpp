#include<iostream>
using namespace std;

class Animal
{
public:
Animal()
{
    cout<<"Constructor is called for animal"<<endl;
}
};

class Dog:public Animal
{
public:
Dog()
{
    cout<<"Constructor called for Dog"<<endl;
}

};

















int main()
{

// Animal* a=new Animal();

Animal* a=new Dog();

Dog* b=new Dog();





Dog* c=(Dog*)new Animal();//right side joh hogaa usse depend kregaa




    return 0;
}