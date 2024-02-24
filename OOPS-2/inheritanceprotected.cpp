#include<iostream>
using namespace std;

class Animal
{

public:
int age;
int weight;

};

class Dog:protected Animal
{

public:
void eat()
{
    cout<<this->age;
}



};

int main()
{




Dog d1;
d1.eat();







    return 0;
}