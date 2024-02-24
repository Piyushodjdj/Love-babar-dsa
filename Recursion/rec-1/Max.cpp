#include<iostream>
#include<limits.h>
using namespace std;

void findMax(int arr[], int size, int i, int& maxi) {

if(i>=size)
{
    return ;
}
if(arr[i+1]>maxi)
{
    maxi=arr[i+1];
}
findMax(arr,size,i+1,maxi);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    int maxi = INT_MIN;

    // Call the function to find the maximum element
     findMax(arr, size, i, maxi);

    // Output the result
    cout << "The maximum element in the array is: " <<maxi << endl;

    return 0;
}
