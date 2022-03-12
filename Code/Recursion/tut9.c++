// Binary Search using Recursion

#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int start, int end, int key)
{
    // element not found
    if (start > end)
    {
        return false;
    }

    int mid = start + (end - start) / 2;

    // element found
    if (arr[mid] == key)
    {
        return true;
    }

    if (arr[mid] < key)
    {
        return binarySearch(arr, mid + 1, end, key);
    }
    else
    {
        return binarySearch(arr, start, mid - 1, key);
    }
}

int main()
{
    int arr[5] = {2, 4, 6, 8, 9};
    int size = 5;
    int key = 88;

    bool ans = binarySearch(arr, 0, size - 1, key);
    if (ans)
    {
        cout << "Present";
    }
    else
    {
        cout << "Absent";
    }

    return 0;
}
