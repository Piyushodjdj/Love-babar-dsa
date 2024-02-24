#include<iostream>
#include<cstring> // Include the cstring header for strlen function
using namespace std;

int getlength(char name[]) {
    return strlen(name); // Use the standard strlen function
}

int main() {
    char name[50];

    cout << "Enter a string (up to 49 characters): ";
    cin.getline(name, 50); // Use cin.getline to handle input within the array size

    cout << "Length is: " << getlength(name) << endl;

    return 0;
}
