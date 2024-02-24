#include<iostream>
using namespace std;
class Animal
{

private:
int weight;

public:
int age;
string type;
void sleep()
{
    cout<<"Sleeping"<<endl;
}

void eat()
{
    cout<<"eating"<<endl;
}
Animal()
{
    this->weight=0;
    this->age=21;
    this->type="";
    cout<<"constructor called"<<endl;
}

//Paramaterized Constructor
Animal(int age,int weight)
{
this->age=age;
this->weight=weight;
cout<<"Called 2"<<endl;
}

Animal(int age,int weight,string s)
{
    this->age=age;
    this->weight=weight;
    this->type=s;
cout<<"Constructor 3 called"<<endl;
}



//copy constructor




Animal(Animal &obj)
{
this->age=obj.age;
this->weight=obj.weight;
cout<<obj.age<<endl;
cout<<obj.weight<<endl;
cout<<"We are here";
}














};
int main()
{
Animal a;
Animal* b=new Animal(100,10);
Animal c(100,20,"piyush");



int* b=new int [9];



//object copy


Animal d(c);











return 0;
}