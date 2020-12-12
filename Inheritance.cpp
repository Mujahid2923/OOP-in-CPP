#include<bits/stdc++.h>
using namespace std ;

class Main
{
protected:
    int a, b ;
public:
    void add( int x, int y )
    {
        a = x ;
        b = y ;
    }

    void print()
    {
        cout << "Parent Class ->" << endl ;
        cout << "sum is " << a + b << endl ;
    }
};

class Secondary : public Main
{
public :
    void Fun()
    {
        cout << "Derived Class ->" << endl ;
        cout << "sum is " << a + b << endl ;
    }
};

int main()
{
    Secondary obj ;
    obj.add( 2, 3 ) ;
    obj.print() ;
    obj.Fun() ;
    return 0 ;
}

