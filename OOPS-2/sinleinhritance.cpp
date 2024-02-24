#include<iostream>
using namespace std;


class car

{

public:
string name;
int weight;
int age;


void speedingup()
{
    cout<<"speed badhaoo";
}

void breakup()
{
    cout<<"break maaro";
}



};


class scarpio:public car
{


};


int main()
{



scarpio piyushwali;


piyushwali.speedingup();











}