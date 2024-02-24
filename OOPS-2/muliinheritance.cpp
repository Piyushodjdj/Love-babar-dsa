#include<iostream>
using namespace std;
class a
{

public:
int physics;
};
class b
{
public:
int chemistry;
};
class c:public a,public b
{
    public :
    int maths;
};

int main()
{
c obj;
cout<<obj.physics<<endl;
cout<<obj.chemistry<<endl;
cout<<obj.maths<<endl;
    return 0;
}