#include <iostream>

using namespace std;
class A
{

public:
    virtual void f()
    {
        cout << "A" << endl;
    }
};


class B : public A
{

public:
    virtual void f()
    {
        cout << "B" << endl;
        A::f();
    }

};


int main()
{
    cout << "------- static test --------" << endl;
    A  a;
    a= B();
    a.f();

    cout << "------- dynamic test ------ " << endl;
    A *g;
    g = new B;
    g->f();

    return 0;
}


