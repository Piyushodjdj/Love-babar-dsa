#include<iostream>
using namespace std;

class Animal
{

public:
int age;
string name;
void eat()

{
cout<<"Eating"<<endl;
}
void sleep()
{
cout<<"sleeping "<<endl;
}


//getter




};

int main()
{

Animal ramesh;//object creation 


cout<<"Size of Class is "<<sizeof(Animal)<<endl;//

ramesh.age=12;
ramesh.name="lion";

cout<<"age of ramesh is"<<ramesh.age<<endl;
cout<<"name of ramesh is"<<ramesh.name<<endl;


ramesh.eat();

ramesh.sleep();





    return 0;
}