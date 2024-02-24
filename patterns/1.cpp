#include<iostream>
using namespace std;

int main()
{
    for(int i=1; i<=3; i++) // outer loop for rows
    {
        for(int j=1; j<=5; j++) // inner loop for columns/ye * print karwa rha hai
        {
            cout << "*"; // print an asterisk for each column
        }

        // After printing all columns in a row, move to the next line
        cout << endl;
    }

    return 0;
}
