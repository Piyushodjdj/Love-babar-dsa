// free krega memory ko
// static memory mien memory free kudh ho jaayegi
//dynmaic memory mien memory ko fre hmko kudh krne se hoga
#include<iostream> 
using namespace std;
class Animal{
public:
int age;
~Animal()
{
cout<<"I m inside destrucotr"<<endl;
}
};
int main()
{
Animal a;
a.age=5;
Animal* b=new Animal();
b->age=12;

//manually isko delete krna hoogaaa


delete b;



    return 0;
}