//Encapsulation
#include<iostream>
using namespace std;

class Animal
{

private:
int age;
int weight;

public:

void eat()
{
    cout<<"Eating";
}


void sleep()
{
    cout<<"sleeping";
}

int getweight()

{
    return weight;
}


void setweight(int w)

{
    this->weight=w;
}





};
int main()
{












    return 0;
}