#include<bits/stdc++.h>
using namespace std ;

class Base
{
public:
    virtual void Area() = 0 ; /// pure virtual function , and it become abstract class as one pure virtual function. And we can't create its object
};

class Derived : public Base
{
public:
    void Area() /// If we don't override then it will remain abstract
    {
        int x, y ;
        cin >> x >> y ;
        cout << x * y << endl ;
    }
};

int main()
{
    //Base obj ; // can't do this as it is abstract class
    Derived obj ;
    obj.Area() ;
    return 0 ;
}
