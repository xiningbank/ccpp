#include <iostream>
#include <typeinfo>  //for 'typeid' to work

using namespace std;

class Person {
public:
    // ... Person members ...  
    virtual ~Person() {}
};

class Employee : public Person {
    // ... Employee members ...  
};

int main () {
    Person person;
    Employee employee;
    Person *ptr = &employee;
    int t = 3;

    cout << typeid(t).name() << endl;
    cout << typeid(person).name() << endl;   // Person (statically known at compile-time)
    cout << typeid(employee).name() << endl; // Employee (statically known at compile-time)  
    cout << typeid(ptr).name() << endl;      // Person * (statically known at compile-time)  
    cout << typeid(*ptr).name() << endl;     // Employee (looked up dynamically at run-time  
    // because it is the dereference of a pointer
    // to a polymorphic class)

    return 0;
}