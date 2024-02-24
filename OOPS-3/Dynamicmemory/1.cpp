#include<iostream>
using namespace std;

int main()
{
    int row = 5;
    int col = 5;

    // Dynamically allocate memory for a 2D array
    int **arr = new int*[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    // Initialize values in the array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = i * col + j;  // You can initialize with any values as needed
        }
    }

    // Printing the array
    cout << "2D Array:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory to prevent memory leaks
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
