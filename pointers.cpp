#include <iostream>
#include <memory>

using namespace std;

int main() {
    int* ptr = new int[10];
    ptr[0]  = 2;
    ptr[1]  = 4;

    shared_ptr<int> p1(ptr);
    cout << *p1 + 1 << endl;

    shared_ptr<int> p2(ptr);
//    shared_ptr<int> p2;
//    cout << (NULL == p2 ? "1" : "0") << endl;
//    cout << (0 == p2 ? "1" : "0") << endl;
//    cout << (nullptr == p2 ? "1" : "0") << endl;
//    cout << (!p2 ? "1" : "0") << endl;

//    cout << *p2 << endl;

    delete p2;

    return 0;
}