#include<bits/stdc++.h>
using namespace std ;

class Base
{
public:
    static int x ;
    int y ;

    Base()
    {
        x ++ ;
    }

    static int print() /// static function only use static data
    {
        return x ;
    }

};

int Base :: x = 0 ; /// Initialization of static Data

int main()
{
    cout << Base :: x << endl ; /// can be initialized without creating object
    Base obj1, obj2 ;
    /// cout << obj1.print() << endl ; or
    cout << Base :: print() << endl ;
    return 0 ;
}
