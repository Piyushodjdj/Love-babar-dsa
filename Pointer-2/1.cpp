#include<iostream>
using namespace std;
int main()
{
int arr[4]={2,4,6,8};
cout<<arr<<endl;
cout<<arr[0]<<endl;
cout<<&arr<<endl;
cout<<&arr[0]<<endl;




int *ptr;
ptr=arr;
ptr=ptr+2;
cout<<"ptr will be added by 2 and become"<<ptr<<endl;
cout<<ptr<<endl;
cout<<&ptr<<endl;

cout<<*arr<<endl;
cout<<arr[0];
cout<<*(arr+1)<<endl;
cout<<arr[1];
cout<<*(arr+2)<<endl;
cout<<arr[2];
cout<<*(arr+3)<<endl;

cout<<arr[3]<<endl;


int i=0;
cout<<i[arr]<<endl;
cout<<arr[i];

cout<<*(arr+i)<<endl;
cout<<*(i+arr)<<endl;










char ch[10]="Babar";
// char *c=&ch[0];
char *c=ch; // Both are same
cout<<ch<<endl;
cout<<c<<endl;
cout<<&ch[0];

cout<<*c;






















    return 0;
}