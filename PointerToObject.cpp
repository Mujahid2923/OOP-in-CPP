#include<bits/stdc++.h>
using namespace std ;

class ComplexNumber
{
private:
    int a, b ;
public:

    ComplexNumber( int a, int b )
    {
        this -> a = a ;
        this -> b = b ;
    }

    void print()
    {
        cout << "Complex number is " << a << "+" << b << "i" << endl ;
    }

    int real()
    {
        return a ;
    }

    int imagine()
    {
        return b ;
    }
};

ComplexNumber Fun( ComplexNumber &A, ComplexNumber &B )
{
    int x, y ;
    x = A.real() + B.real() ;
    y = A.imagine() + B.imagine() ;
    ComplexNumber temp( x, y ) ;
    return temp ;
}

int main()
{
    ComplexNumber obj1( 2, 3 ), obj2( 4, 6 ) ;
    obj1.print() ;
    obj2.print() ;

    ComplexNumber obj3 = Fun( obj1, obj2 ) ;
    obj3.print() ;

    ComplexNumber *obj4 ;
    obj4 = &obj3 ;
    obj4 -> print() ;

    return 0 ;
}

