#include<bits/stdc++.h>
using namespace std ;

class Main
{
private:
    int a, b ;
public:
    Main()
    {
        cout << "Default" << endl ;
    }

    Main( int x, int y )
    {
        cout << "Parameterized" << endl ;
        a = x ;
        b = y ;
    }

    Main( Main &obj )
    {
        a = obj.a ;
        b = obj.b ;
    }

    void print()
    {
        cout << "sum is " << a + b << endl ;
    }

    ~Main()
    {
        cout << "Destructor" << endl ;
    }
};

int main()
{
    Main obj1 ;
    Main obj2( 2, 3 ) ;
    obj2.print() ;
    Main obj3 = obj2 ; /// Copy constructor
    obj3.print() ;
    return 0 ;
}

