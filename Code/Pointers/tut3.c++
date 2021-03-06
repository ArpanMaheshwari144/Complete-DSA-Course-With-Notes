// Pointers in arrays

#include <bits/stdc++.h>
using namespace std;

int main()
{

    /*
    int arr[10] = {23, 122, 41, 67};
    cout << "address of first memory block is " << arr << endl;
    cout << arr[0] << endl;
    cout << "address of first memory block is " << &arr[0] << endl;

    cout << *arr << endl;
    cout << *arr + 1 << endl;
    cout << *(arr + 1) << endl;
    cout << *(arr) + 1 << endl;
    cout << arr[2] << endl;
    cout << *(arr + 2) << endl;

    // arr[i] = *(arr + i) or i[arr] = *(i + arr)
    int i = 3;
    cout << i[arr] << endl;
    */

    /*
    int temp[10] = {1, 2};
    cout << sizeof(temp) << endl;
    cout << sizeof(*temp) << endl;
    cout << sizeof(&temp) << endl;

    int *ptr = &temp[0];
    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    cout << sizeof(&ptr) << endl;
    */

    /*
    int a[20] = {1, 2, 3, 5};
    cout << &a[0] << endl;
    cout << &a << endl;
    cout << a << endl;

    int *p = &a[0];
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;
    */

    int arr[10];
    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr = ptr + 1; // this will point the address of the next element in the array
    cout << ptr << endl;

    return 0;
}