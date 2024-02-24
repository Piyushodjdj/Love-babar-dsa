#include<iostream>
using namespace std;
class car
{

public:

int age;
int weight;
string name;
void speedup()
{
    cout<<"speeding up"<<endl;
}







};



class scorpio:public car
{










};




class fortuner:public car
{

};




int main()
{


scorpio s11;
s11.speedup();

fortuner f11;
f11.speedup();






    return 0;
}