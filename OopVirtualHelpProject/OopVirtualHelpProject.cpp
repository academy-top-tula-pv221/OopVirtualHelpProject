#include <iostream>

class A
{
public:
    virtual void M()
    {
        std::cout << "A\n";
    }
};

class B : public A
{
public:
    virtual void M()
    {
        std::cout << "B\n";
    }
};

class C : public A
{
public:
    virtual void M()
    {
        std::cout << "C\n";
    }
};

class D : public B
{
public:
    
};

class E : public D
{
public:
    void EEEE()
    {

    }
};


int main()
{
    A* aptr = new A();
    aptr->M();

    aptr = new B();
    aptr->M();

    aptr = new D();
    aptr->M();

    aptr = new E();
    aptr->M();
    
    E* eptr = new E();
    eptr->EEEE();
}
