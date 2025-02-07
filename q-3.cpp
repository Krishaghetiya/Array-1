// Write a Program to perform the addition operation of two 1D arrays & store it in
// another array. Keep in mind that both array sizes must be the same.
// For example,
// Input:
// Enter array size: 5
// Enter array A's elements:
// a[0] = 7
// a[1] = 4
// a[2] = 9
// a[3] = 5
// a[4] = 2
// Enter array B's elements:
// b[0] = 1
// b[1] = 3
// b[2] = 1
// b[3] = 7
// b[4] = 3
// Output:
// Array C is: 8, 7, 10, 12, 5

#include <iostream>
using namespace std;

 main()
{
    int size;

    cout << "Enter array size:";
    cin >> size;

    int i, A[size] , B[size] , sum[size];

    cout << "Enter array A's elements:" << endl;

    for (int i = 0; i <size; i++)
    {
        cin >> A[i];
    }

    cout << "Enter array B's elements:" << endl;
    
    for (int i = 0; i <size; i++)
    {
        cin >> B[i];
    }

    cout << "Array C is:" << endl;

    for(int i=0; i < size; i++)
    {
    sum[i] = A[i] + B[i];
    }


    for(int i=0; i < size; i++)
    {
    cout << sum[i] << endl;
    }


    return 0;
}
