#include<iostream>
using namespace std;

int main()
{
    
for(int row=0;row<5;row=row+1)



{
   
if(row==0||row==4)
{
for(int col=0;col<5;col=col+1)
{
cout<<"*";
}
    
}
else
{
cout<<"*";
for(int i=0;i<3;i++)
{
cout<<" ";
}
cout<<"*";

}


cout<<endl;
}





return 0;

}

    

