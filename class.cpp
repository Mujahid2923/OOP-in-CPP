#include<bits/stdc++.h>
using namespace std ;

class Main
{
private:
    int a, b ; /// member variable
public:
    void add( int x, int y ) /// member function
    {
        a = x ;
        b = y ;
    }

    void print()
    {
        cout << "sum is " << a + b << endl ;
    }
};

int main()
{
    Main obj ; /// Objects are nothing but variable of type class
    obj.add( 2, 3 ) ;
    obj.print() ;
    return 0 ;
}
