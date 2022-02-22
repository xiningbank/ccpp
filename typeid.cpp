#include <iostream>
#include <typeinfo>  //for 'typeid' to work

using namespace std;

class Human {
public:
    // ... Human members ...  
    virtual ~Human() {}
//    ~Human() {}
};

class Chinese : public Human {
    // ... Chinese members ...
};

int main () {
    Human human;
    Chinese chinese;
    Human* ptr = &chinese;

    int t = 30;
    unsigned long long ull = 1.0;
    float f = 2.0;

    cout << typeid(t).name() << endl;
    cout << typeid(ull).name() << endl;
    cout << typeid(f).name() << endl;
    cout << typeid(human).name() << endl;   // Human (statically known at compile-time)
    cout << typeid(chinese).name() << endl; // Employee (statically known at compile-time)
    cout << typeid(ptr).name() << endl;      // Human * (statically known at compile-time)  
    cout << typeid(*ptr).name() << endl;     // Employee (looked up dynamically at run-time  
    // because it is the dereference of a pointer
    // to a polymorphic class)

    return 0;
}
