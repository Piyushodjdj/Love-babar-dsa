#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
void printsubsquence(string s,string output,int i)
{
if(i>=s.length())
{
    cout<< output<<endl;
    return;
}
printsubsquence(s,output,i+1);
output.push_back(s[i]);
printsubsquence(s,output,i+1);
}

int main() {
    string s = "abc";
    string output="";
    vector<string> v;
    int i = 0;
    printsubsquence(s, output, i);

    return 0;
}
