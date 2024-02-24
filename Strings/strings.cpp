#include<iostream>
#include<string>
using namespace std;




bool compareString(string a,string b)
{


if(a.length()!=b.length())
{
       return false;
}

    


for(int i=0;i<a.length();i++)
{
    if(a[i]!=b[i])
    {
        return false;
    }
    
}

return true;

}

















int main()
{

string str;

getline(cin,str);
cout<<str.length();



str.push_back('A');
cout<<str;

cout<<str.substr(0,6);





string a="love";
string  b="lover";

if(a.compare(b)==0)
{
    cout<<"a and b are exactly same strings";
}
else
{
    cout<<"a and b are not same";
}


cout<<compareString(a,b);


string x="abcd";
string y="bcde";

cout<<x.compare(y);




string m="This is my first message";
string word="first";

m.replace(0,4,word);


cout<<m;


string n="ABCDEFGHIJKLMNOPQRST";
n.erase(10,10);

cout<<n;











    return 0;
}