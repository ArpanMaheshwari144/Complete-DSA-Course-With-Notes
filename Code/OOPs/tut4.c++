// Single Inheritance

#include <bits/stdc++.h>
using namespace std;

class Animal
{

public:
    int age = 5;
    int weight;

public:
    void speak()
    {
        cout << "Speaking " << endl;
    }
};

class Dog : public Animal
{
};

int main()
{
    Dog d;
    d.speak();
    cout << d.age << endl;

    return 0;
}