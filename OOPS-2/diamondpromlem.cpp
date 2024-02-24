#include<iostream>
using namespace std;



class a
{
    public:
    int chemistry;
    a()
    {
        chemistry=110;
    }
};


class b
{

    public:
    int chemistry;
    b()
    {
        chemistry=200;
    }
};


class c:public a,public  b
{
             public:
             int chemistry;







};
int main()
{


c obj;
cout<<obj.a::chemistry<<endl<<obj.b::chemistry<<endl<<obj.chemistry;














    return 0;
}