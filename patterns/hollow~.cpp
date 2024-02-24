#include<iostream>
using namespace std;

int main() {
    for (int row = 0; row < 5; row++) {
        // Print spaces
        for (int col = 0; col < 5 - row - 1; col++) {
            cout << " ";
        }

        // Print asterisks
        for (int col = 0; col < 2 * (row + 1); col++) {
            if (col == 0 || col == 2 * row) {
                cout << "* ";
            } else {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
