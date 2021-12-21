
// Iterative C++ program to reverse an array
#include <bits/stdc++.h>
using namespace std;

/* Function to reverse arr[] from start to end*/
void rvereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

/* Utility function to print an array */
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

/* Driver function to test above functions */
int main()
{
    int o;
    cin >> o;
    int arr[o];
    cin >> arr[o];

    int n = sizeof(arr) / sizeof(arr[0]);

    // To print original array
    printArray(arr, n);

    // Function calling
    rvereseArray(arr, 0, n - 1);

    cout << "Reversed array is" << endl;

    // To print the Reversed array
    printArray(arr, n);

    return 0;
}

#include <iostream>
using namespace std;

int main()
{

    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int array[] = {5, 6, 2, 3};

//     //find the size of array
//     int size = sizeof(array)/sizeof(array[0]);

//     //declare new array to store reverse of original array
//     int k=0, reverse[size];

//     //Loop from back and assig value to new array
//     for(int i=size-1; i>=0; ){
//         reverse[k++] = array[i--];
//     }

//     //output the reverse array
//     for(int i=0; i<size; i++){
//         cout << reverse[i] <<", ";
//     }

//     return 0;
// }