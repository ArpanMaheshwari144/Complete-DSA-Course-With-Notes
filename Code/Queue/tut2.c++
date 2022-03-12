// Doubly-ended queue in stl

#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq;
    dq.push_front(12);
    dq.push_back(14);

    cout << dq.front() << endl;
    cout << dq.back() << endl;

    dq.pop_front();

    cout << dq.front() << endl;
    cout << dq.back() << endl;

    dq.pop_back();

    if (dq.empty())
    {
        cout << "Queue is empty";
    }
    else
    {
        cout << "Queue is not empty";
    }

    return 0;
}