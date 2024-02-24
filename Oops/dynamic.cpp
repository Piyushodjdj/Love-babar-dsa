#include<iostream>
using namespace std;
class Animal
{
private:
int weight;
public:
int age;
string  name; 
void sleep()
{
    cout<<"sleeping"<<endl;
}
void eat()
{
    cout<<"eating"<<endl;
}

void setweight(int w)
{
    this->weight=w;
}

int getweight()
{
    return this->weight;
}
};
int main()
{
Animal* piyush=new Animal;//ye piyush pointer ban gya dynamically 

(*piyush).age=20;
(*piyush).name="hiii";
//alternate
piyush->age=10;
piyush->name="Baby";
(*piyush).eat();
(*piyush).sleep();
(*piyush).setweight(70);
cout<<"Age is "<<(*piyush).getweight();
return 0;

}