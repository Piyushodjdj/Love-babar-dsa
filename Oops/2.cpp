#include<iostream>
using namespace std;
class Animal
{
private:
int weight;
//getter
public:
int get()
{
return weight;
}
//setter
void set(int w)
{
weight=w;
}
};
int main()
{
Animal p;
p.set(200);
cout<<"weight is"<<p.get();


return 0;
}