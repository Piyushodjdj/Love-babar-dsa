#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr{0, 1, 1, 0, 1, 0, 1, 0};
    int s = 0;
    int end = arr.size() - 1;
    int i = 0;

    while (i <= end) {
        if (arr[i] == 0) {
            swap(arr[i], arr[s]);
            i++;
            s++;
        } else if (arr[i] == 1) {
            swap(arr[i], arr[end]);
            end--;
        }

        // Print the array after each swap
    
    }

        for (auto val : arr) {
            cout << val << " ";
        }
        cout << endl;

    return 0;
}
