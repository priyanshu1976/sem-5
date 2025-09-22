#include <iostream>
using namespace std;

class A {
public:
    void show() { cout << "A::show" << endl; }
};

class B : public A { };  // Inherits from A
class C : public A { };  // Inherits from A

class D : public B, public C { }; // Inherits from B and C

int main() {
    D obj;
    obj.show(); // ❌ Ambiguity error
}
