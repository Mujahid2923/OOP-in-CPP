#include<bits/stdc++.h>
using namespace std ;

class Base
{
public:
    void Fun1()
    {
        cout << "Base class Fun1" << endl ;
    }
    virtual void Fun2()
    {
        cout << "Base class Fun2" << endl ;
    }
};

class Derived1 : public Base
{
public:
    void Fun1()
    {
        cout << "Derived1 class Fun1" << endl ;
    }
    void Fun2()
    {
        cout << "Derived1 class Fun2" << endl ;
    }
};

class Derived2 : public Base
{
public:
    void Fun1()
    {
        cout << "Derived2 class Fun1" << endl ;
    }
    void Fun2()
    {
        cout << "Derived2 class Fun2" << endl ;
    }
};

void print( Base *obj ) /// Using one function I am referring all function of different derived class
{
    obj -> Fun1() ;
    obj -> Fun2() ;
}

int main()
{
    Base *obj ;
    Derived1 obj1 ;
    Derived2 obj2 ;

    obj = &obj1 ;

    print( obj ) ;

    obj = &obj2 ;

    print( obj ) ;

    return 0 ;
}

