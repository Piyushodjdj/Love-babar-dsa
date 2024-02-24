#include<iostream>
using namespace std;
int binarysearch(int arr[], int data, int low, int hi)
{
    if (hi <low)
    {
        return -1;  // Element not found
    }

    int mid = low + (hi - low) / 2;

    if (arr[mid] == data)
    {
        return mid;  // Element found at index mid
    }

    if (arr[mid] < data)
    {
        return binarysearch(arr, data, mid + 1, hi);
    }

    if (arr[mid] > data)
    {
        return binarysearch(arr, data, low, mid - 1);
    }
}


int main()
{
    // Example usage:
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int data = 7;
    int result = binarysearch(arr, data, 0, sizeof(arr) / sizeof(arr[0]) - 1);

    if (result != -1)
    {
        cout << "Element found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
