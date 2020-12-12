#include<bits/stdc++.h>
using namespace std ;

class Base
{
public:
    void Fun()
    {
        cout << "Base class" << endl ;
    }
};

class Derived : public Base
{
public:
    void Fun() /// Here the Function is oevrridden ( Runtime polymorphism )
    {
        cout << "Derived class" << endl ;
    }
};

int main()
{
    Base obj1 ;
    obj1.Fun() ;
    Derived obj2 ;
    obj2.Fun() ;
    return 0 ;
}
