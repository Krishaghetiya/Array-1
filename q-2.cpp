// Write a Program to find the average of a 1D array.
// For example,
// Input:
// Enter array size: 5
// Enter array elements:
// a[0] = 12
// a[1] = 42
// a[2] = 18
// a[3] = 50
// a[4] = 26
// Output:
// Average of an Array: 29.6

#include <iostream>
using namespace std;

 main()
{
    int   size;
    float sum = 0;
    float avg;
    cout << "Enter array size:";
    cin >> size;

    int array[size];

    cout << "Enter array elements:" << endl;

   for (int i = 0; i < size ; i++)
    {
        cin >> array[i];
         sum = sum + array[i] ;
    }

    avg = sum / size;
    cout << "Average of an Array:" << avg;
    return 0;
}
