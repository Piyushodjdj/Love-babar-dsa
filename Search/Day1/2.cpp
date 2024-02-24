#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> arr{1, 3, 5, 19, 21, 24, 28};
    int s = 0;
    int e = arr.size() - 1;
    int key = 20;
    while (s <= e) {
        int mid = s+(e -s) / 2;// To control integer flow

        if (arr[mid] == key) {
            cout << "Key found at index: " << mid << endl;
            return 0; // Exit the program as the key is found
        } else if (arr[mid] > key) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }

    cout << "Key not found in the array" << endl;

    return 0;
}
