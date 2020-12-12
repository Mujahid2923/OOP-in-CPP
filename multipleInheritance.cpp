#include<bits/stdc++.h>
using namespace std ;

class Base1
{
public:
    print()
    {
        cout << "Base class 1" << endl ;
    }
};

class Base2
{
public:
    print()
    {
        cout << "Base class 2" << endl ;
    }
};

class Derived : public Base1, public Base2
{
public:
    print() /// If I didn't override than Ambiguity will occur coz it will confused which print() need to take
    {
        cout << "Derived class" << endl ;
    }
};

int main()
{
    Derived obj ;
    obj.print() ;
    return 0 ;
}
