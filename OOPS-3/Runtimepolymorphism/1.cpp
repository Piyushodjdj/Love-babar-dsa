#include<iostream>
using namespace std;
class Animal
{
public:
void speak()
{
    cout<<"speaking";
}
};
class Dog:public Animal
{
 

};
int main()
{
Animal a;
a.speak();
return 0;
}