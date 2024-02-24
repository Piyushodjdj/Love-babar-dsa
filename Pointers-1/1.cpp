#include<iostream>
using namespace std;
int main()
{

int a=5;//initialization
cout<<"address of a is "<<&a<<endl;//address of a 
int *ptr;//pointer createe it use to store address
ptr=&a;//
cout<<"address of a is "<<ptr<<endl;;
cout<<"Value of a is "<<*ptr<<endl;//dereference of ptr is
cout<<"ADDRESS OF PTR IS"<<&ptr<<endl;//address of ptr






int b=110;
int *p=&b;
cout<<"size of"<<sizeof(p);

char ch='a';
char *c=&ch;
cout<<sizeof(c);







    return 0;
}