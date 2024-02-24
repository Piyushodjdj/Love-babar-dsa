#include<iostream>
using namespace std;
int main()
{
for(int row=0;row<5;row=row+1)
{

for(int col=0;col<5-row-1;col++)
{
    cout<<" ";;
}

for(int col=0;col<2*(row+1);col=col+1)
{

if(col==0||col==2*row)
{
   cout<<"* ";
}
else
{
    cout<<" ";
}



cout<<endl;







}













}








    return 0;
}