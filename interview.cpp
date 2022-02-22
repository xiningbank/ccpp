//
// Created by william on 2022/2/21.
//

#include <iostream>
#include <typeinfo>

using namespace std;

class Base
{
    public:
        virtual void foo() {
            cout << "Base::foo" << endl;
        }

        virtual ~Base() {
            cout << "Base class destruction." << endl;
        }
};

class Derived: public Base
{
    public:
        void foo() {
            cout << "Derived::foo" << endl;
        }

        ~Derived() {
            cout << "Derived class destruction." << endl;
        }
};

int main(void)
{
    Base* pBase = new Derived();
    pBase->foo();

    int i = 0;
    int* pI = new int(2);

//    cout << "typeid: " << typeid(pBase) << endl;
    cout << "sizeof(pBase): " << sizeof(pBase) << endl;
    cout << "sizeof(int): " << sizeof(int) << endl;
    cout << "sizeof(i): " << sizeof(i) << endl;
    cout << "sizeof(pI): " << sizeof(pI) << endl;
//    cout << "typeid(pBase).foo(): " << typeid(pBase).foo() << endl;

    int n = 100;
    const type_info nInfo = typeid(n);
    cout << nInfo.name() << endl;

    delete pBase;

    return 0;
}
